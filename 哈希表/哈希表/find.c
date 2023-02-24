#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

extern int hash(const key, int tableSize);

struct ListNode* find(int key, struct HashTable* h)
{
	struct ListNode* l = h->theLists[hash(key, h->tableSize)];
	struct ListNode* p = l->next;
	while (p != NULL && p->element != key) {
		p = p->next;
	}
	return p;
}