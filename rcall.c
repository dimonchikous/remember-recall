#include "rcall.h"
#include <stdio.h>
#define MAXSLOTS 10

int rcall_issaved[MAXSLOTS]={0};
int rcall_saved[MAXSLOTS];
int checkslot(int slot){
	return slot>=0&&slot<MAXSLOTS;
}

void remember(int a, int slot){
	if (checkslot(slot)){
		rcall_saved[slot] = a;
		rcall_issaved[slot] = 1;
	}
	else 
		printf("Error: Unkown slot, nothing was saved\n");
}

int recall(int slot){
	if (checkslot(slot)){
		if (rcall_issaved[slot]==0){
			printf("Error:Value not saved! -1 was recalled\n");
			return -1;
		}
		else if (rcall_issaved[slot]==1)
			return rcall_saved[slot];
		else{ 
			printf("Unknown error. -1 was recalled\n");
			return -1;
		}
	}
	else{
		printf("Error: Unknown slot, -1 was recalled\n");
		return -1;
	}

}

void cleansave(int slot){
	if (checkslot(slot)){
		rcall_saved[slot] = 0;
		rcall_issaved[slot] = 0;
	}
	else
		printf("Error: Unknown slot, nothing was cleaned");
}

void checksave_rcall(int slot){
       if (checkslot(slot)){
	       if (rcall_issaved[slot]==1)
		       printf("slot %d is saved with value %d\n", slot, rcall_saved[slot]);
	       
		else if (rcall_issaved[slot]==0)
			printf("slot %d is not saved\n", slot);
	        else 
			printf("Unknown value in issaved[%d] (must be 0 or 1)\n", slot);
       }

	else
	 printf("Unknown slot\n");
}	
