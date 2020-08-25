#include <stdio.h>

#include "HashTable.h"


int main(int argc, char** argv){
	
	ht* hashtable = new_ht();
	
	del_ht(hashtable);	
	
	getchar();

	return 0;
}

