#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

void insert(int key, struct HashTable* h)
{
	struct ListNode* pos = find(key, h);
	if (NULL == pos) {
		struct ListNode* newCell = malloc(sizeof(struct ListNode));
		if (NULL == newCell) {
			printf("Out of space!");
			return;
		}
		else {
			struct ListNode* l = h->theLists[hash(key, h->tableSize)];
			newCell->next = l->next;
			newCell->element = key;
			l->next = newCell;
		}
	}
}