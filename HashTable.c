#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "HashTable.h"

static ht_item* ht_new_item(const char* k, const char* v) {
	ht_item* item = malloc(sizeof(ht_item));
	item->key = strdup(k);
	item->value = strdup(v);
	printf("ht_item created.\n");
	
	return item;
}

static void del_ht_item(ht_item* item){
	free(item->key);
	free(item->value);
	free(item);	
	printf("ht_item deleted.\n");
}

ht* new_ht() {
	ht* i = malloc(sizeof(ht));	
	i->size = 53;
	i->count = 0;
	i->items = calloc(i->size, sizeof(ht_item));
	
	printf("Hashtable of size %d created\n", i->size);
	return i;
}

void del_ht(ht* hashtable) {
	for (int i=0; i < hashtable->size; i++) {
		ht_item* item = hashtable-> items[i];
		if(item != NULL) {
			del_ht_item(item);
		}
	}

	printf("Hashtable deleted\n");
	free(hashtable->items);
	free(hashtable);
}


