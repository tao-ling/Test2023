#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

void myPrint(struct HashTable* h)
{
	struct ListNode* temp;
	for (int i = 0; i < h->tableSize; i++) {
		temp = h->theLists[i]->next;
		while (NULL != temp) {
			printf("%d ", temp->element);
			temp = temp->next;
		}
	}
}