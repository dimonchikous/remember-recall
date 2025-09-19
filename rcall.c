#include "rcall.h"
#include <stdio.h>

bool issaved = false;
int saved = 0;

void remember(int a){
	saved = a;
	issaved = true;
}

int recall(){
	if (issaved==false){
		printf("Value not saved!\n");
		return 1;
	}
	else if (issaved==true)
		return saved;
	else{ 
		printf("Unknown error\n");
		return 1;
	}

}

void cleansave(){
	saved = 0;
	issaved = false;
}
