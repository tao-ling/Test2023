#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

int hash(const key, int tableSize);

//初始化哈希表
struct HashTable* initializeTable(int tableSize)
{
	struct HashTable* h;
	if (tableSize < MinTableSize) {
		printf("Table size is too small!\n");
		return NULL;
	}
	h = malloc(sizeof(struct HashTable));
	if (NULL == h) {
		printf("Out of space!\n");
		return NULL;
	}
	h->tableSize = tableSize;
	h->theLists = malloc(sizeof(struct listNode*) * h->tableSize);
	if (NULL == h->theLists) {
		printf("Out of space!\n");
	}
	for (int i = 0; i < h->tableSize; i++) {
		h->theLists[i] = malloc(sizeof(struct ListNode));
		if (NULL == h->theLists[i]) {
			printf("Out of space!\n");
			return NULL;
		}
		else {
			h->theLists[i]->next = NULL;
		}
	}
	return h;
}

int hash(const key, int tableSize)
{
	return key % tableSize;
}