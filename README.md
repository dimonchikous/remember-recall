# Remember-Recall
Remember-Recall is VERY simple library on c for saving value. 

# Documentation
For using you need to include rcall.h

## Slots
In rcall_saved[] you basicly have 10 saves(from 0 to 9), but you can change amount of slots by changing MAXSLOTS value in rcall.c. It maded by arrays. You need to specify the slot number.

## remember()
remember() is saving value in integier. Value saving to array rcall_saved[]. You have 10 slots in this array.

Form of remember():
```c
remember(variable_or_value, slot_num);
```

Example:
```c
int a = 623;
remember(a, 0); //now value of a saved in slot 0
```

## recall()
recall() is putting saved value from slot in rcall_saved[].

Form of recall():
```c
recall(slot_num);
```

Example:
```c
int a=123;
remember(a, 4);
int b=23;
b = recall(4); //now b=a=123
```
If value not saved in slot(or slot not specified correctly), recall() will print error and put -1

Example:
```c
int a=5;
a = recall(0); //because no one value was saved, a=-1
```

## cleansave()
cleansave() is fully cleaning saved slot in rcall_saved[]

Form of cleansave()
```c
cleansave(slot_num);
```

Example:
```c
int a=86;
remember(a, 5);
cleansave(5); //cleaning variable saved
a = recall(5); //error, saved slot has no value. Now a=-1
```

## checksave_rcall()
checksave_rcall() is printing information about save slot.

Form of checksave_rcall()
```c
checksave_rcall(slot_num);
```

Example:

Input:
```c
a=60;
remember(a, 2);
checksave_rcall(2);
checksave_rcall(0);
```

Output:
```
slot 2 is saved with value 60
slot 0 is not saved
```

## checkevery_rcall()
checkevery_rcall() is printing count of saved and not saved slots. So it can print status of every slots, but you can disable this by changing quiet argument for more than 1.

Form of checkevery_rcall()
```c
checkevery_rcall(quiet) //0 and less for printing status of all slots, 1 and more for not printing status of all slots
```

Example:

Input:
```c
/* Usualy MAXSLOTS is 10
so, here MAXSLOTS is 10 too */
a=4
remember(a,2);
checkevery_rcall(1);
printf("---\n");
checkevery_rcal(0);
```

Output:
```
Saved: 1
Not saved: 9
---
Slot 0 is not saved
Slot 1 is not saved
Slot 2 is saved
Slot 3 is not saved
Slot 4 is not saved
Slot 5 is not saved
Slot 6 is not saved
Slot 7 is not saved
Slot 8 is not saved
Slot 9 is not saved
Saved: 1
Not saved: 9
```

