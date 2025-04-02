#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *key;
    void *value;
} KeyValuePair;

typedef struct {
    int capacity;
    int size;
    KeyValuePair **items;
} HashMap;

unsigned int hash(char *key, int capacity) {
    unsigned long hash = 5381;
    int c;

    while ((c = *key++)) {
        hash = ((hash << 5) + hash) + c;
    }
    return hash % capacity;
}

HashMap *createHashMap(int capacity) {
    HashMap *map = (HashMap *)malloc(sizeof(HashMap));
    if (map == NULL) {
        return NULL;
    }
    map->capacity = capacity;
    map->size = 0;
    map->items = (KeyValuePair **)calloc(capacity, sizeof(KeyValuePair *));
    if (map->items == NULL) {
        free(map);
        return NULL;
    }
    return map;
}

void insertHashMap(HashMap *map, char *key, void *value) {
    if (map == NULL || key == NULL) {
        return;
    }
    unsigned int index = hash(key, map->capacity);
    while (map->items[index] != NULL) {
        if (strcmp(map->items[index]->key, key) == 0) {
            map->items[index]->value = value;
            return;
        }
        index = (index + 1) % map->capacity;
    }
    KeyValuePair *item = (KeyValuePair *)malloc(sizeof(KeyValuePair));
    if (item == NULL) {
        return;
    }
    item->key = strdup(key);
    if(item->key == NULL){
        free(item);
        return;
    }
    item->value = value;
    map->items[index] = item;
    map->size++;
}

void *getHashMap(HashMap *map, char *key) {
    if (map == NULL || key == NULL) {
        return NULL;
    }
    unsigned int index = hash(key, map->capacity);

    while (map->items[index] != NULL) {
        if (strcmp(map->items[index]->key, key) == 0) {
            return map->items[index]->value;
        }
        index = (index + 1) % map->capacity;
    }
    return NULL;
}

void freeHashMap(HashMap *map) {
    if (map == NULL) {
        return;
    }
    for (int i = 0; i < map->capacity; i++) {
        if (map->items[i] != NULL) {
            free(map->items[i]->key);
            free(map->items[i]);
        }
    }
    free(map->items);
    free(map);
}

/* Hashmap Practice */

typedef struct {
	char *key;
	void *value;
} KeyValuePair;

typedef struct {
	int capacity;
	int size;
	KeyValuePair **items;
} HashMap;

unsigned int hash(char *key, int capacity)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *key++))
		hash = ((hash << 5) + hash) + c;
	return hash % capacity;
}

HashMap *createHashMap(int capacity)
{
	HashMap *map = (HashMap*)malloc(sizeof(HashMap));
	if (map == NULL)
		return NULL;
	map->capacity = capacity;
	map->size = 0;
	map->items = (KeyValuePair**)calloc(capacity, sizeof(KeyValuePair *));
	if (map->items == NULL) {
		free(map);
		return NULL;
	}
	return map;
}



