#define _CRT_SECURE_NO_WARNINGS 1
#include "hash_table.h"

int main()
{
	struct hash_table* hash_table = initialize_table(11);
	insert(123, hash_table);
	insert(99, hash_table);
	insert(11, hash_table);
	insert(78, hash_table);
	insert(897, hash_table);
	insert(340, hash_table);
	insert(77, hash_table);
	insert(993, hash_table);
	insert(244, hash_table);
	insert(423, hash_table);
	insert(1456, hash_table);
	insert(1233, hash_table);
	insert(904, hash_table);
	insert(234, hash_table);
	my_print(hash_table);

	struct list* l1 = find(423, hash_table);
	if (NULL == l1) {
		printf("not find!");
	}
	else {
		printf("\nelment is:%d\n", l1->element);
	}

	struct list* l2 = my_delete(423, hash_table);
	if (NULL == l2) {
		printf("not find!");
	}
	else {
		printf("elment you delete is:%d\n", l2->element);
	}
	my_print(hash_table);

	return 0;
}