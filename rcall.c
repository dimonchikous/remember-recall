#include "rcall.h"
#include <stdio.h>
#define MAXSLOTS 10
#define SLOT_ERROR -1

static int rcall_issaved[MAXSLOTS]={0};
static int rcall_saved[MAXSLOTS];
int checkslot(int slot){
	return slot>=0&&slot<MAXSLOTS;
}

void remember(int a, int slot){
	if (checkslot(slot)){
		rcall_saved[slot] = a;
		rcall_issaved[slot] = 1;
	}
	else 
		printf("Error: Unknown slot, nothing was saved\n");
}

int recall(int slot){
	if (checkslot(slot)){
		if (rcall_issaved[slot]==0){
			printf("Error:Value not saved! -1 was recalled\n");
			return SLOT_ERROR;
		}
		else if (rcall_issaved[slot]==1)
			return rcall_saved[slot];
		else{ 
			printf("Unknown error. -1 was recalled\n");
			return SLOT_ERROR;
		}
	}
	else{
		printf("Error: Unknown slot, -1 was recalled\n");
		return SLOT_ERROR;
	}

}

void cleansave(int slot){
	if (checkslot(slot)){
		rcall_saved[slot] = 0;
		rcall_issaved[slot] = 0;
	}
	else
		printf("Error: Unknown slot, nothing was cleaned\n");
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

void checkevery_rcall(){
	int snum;
	int fsaved=0;
	int fnotsaved=0;
	for (snum=0; snum>= 0 && snum < MAXSLOTS; snum++){
		if (rcall_issaved[snum] == 1)
			fsaved++;
		else 
			fnotsaved++;
	}
	printf("Saved: %d\nNot saved: %d\n", fsaved, fnotsaved);
}
