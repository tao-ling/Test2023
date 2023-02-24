#define _CRT_SECURE_NO_WARNINGS 1
#include "哈希表的分离链接法实现.h"

int main()
{
	struct HashTable* hashTable = initializeTable(11);
	insert(123, hashTable);
	insert(99, hashTable);
	insert(11, hashTable);
	insert(78, hashTable);
	insert(897, hashTable);
	insert(340, hashTable);
	insert(77, hashTable);
	insert(993, hashTable);
	insert(244, hashTable);
	insert(423, hashTable);
	insert(1456, hashTable);
	insert(1233, hashTable);
	insert(904, hashTable);
	insert(234, hashTable);
	myPrint(hashTable);

	struct ListNode* l1 = find(423, hashTable);
	if (NULL == l1) {
		printf("not find!");
	}
	else {
		printf("\nelment is:%d\n", l1->element);
	}

	struct ListNode* l2 = myDelete(423, hashTable);
	if (NULL == l2) {
		printf("not find!");
	}
	else {
		printf("elment you delete is:%d\n", l2->element);
	}
	myPrint(hashTable);

	return 0;
}