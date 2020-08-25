#ifndef HashTable
#define HashTable

typedef struct {
	char* key;
       char* value;

} ht_item;
typedef struct{
	int size;
	int count;
	ht_item** items;
} ht;


static ht_item* ht_new_item(const char* k, const char* v);
ht* new_ht();

static void del_ht_item(ht_item* item);
void del_ht(ht* hashtable);



#endif
