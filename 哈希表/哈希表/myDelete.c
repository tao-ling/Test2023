#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

extern int hash(const key, int tableSize);

struct ListNode* myDelete(int key, struct HashTable* h)
{
	struct ListNode* l1 = h->theLists[hash(key, h->tableSize)];
	struct ListNode* l2 = l1->next;
	while (key != l2->element) {
		if (NULL == l2->next) {
			printf("not find!");
			return NULL;
		}
		l1 = l2;
		l2 = l2->next;
	}
	l1->next = l2->next;
	return l2;
}