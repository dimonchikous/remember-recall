# Remember-Recall
Remember-Recall is VERY simple library on c for saving value. 

# Documentation
For using you need to include rcall.h

## remember()
rememer() is saving value in integier. Value saving only one time to variable saved.

Example:
```c
int a = 623;
remember(a); //now value of a saved
```

## recall()
recall() is putting saved value

Example:
```c
int a=123;
remember(a);
int b=23;
b = recall(); //now b=a=123
```
If value not saved, recall() will print error and put 1

Example:
```c
int a=5;
a = recall(); //because no one value was saved, a=1
```

## cleansave()
cleansave() is fully cleaning variable saved

Example:
```c
int a=86;
remember(a);
cleansave(); //cleaning variable saved
a = rcall(); //error, saved has no value. Now a=1
```








