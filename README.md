# Remember-Recall
Remember-Recall is VERY simple library on c for saving value. 

# Documentation
For using you need to include rcall.h

## Slots
In rcall_saved[] you have 11 saves(from 0 to 10). It maded by arrays. You need to specify the slot number.

## remember()
remember() is saving value in integier. Value saving to array rcall_saved[]. You have 11 slots in this array.

Form of remember():
```c
remember(variable, slot_num);
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
cleansave(slot_num)
```

Example:
```c
int a=86;
remember(a, 5);
cleansave(5); //cleaning variable saved
a = recall(5); //error, saved slot has no value. Now a=-1
```








