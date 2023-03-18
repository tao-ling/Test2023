#define _CRT_SECURE_NO_WARNINGS 1
#include "hashlist.h"

int main()
{
	struct hash_table* hash_table = init(11);
	insert(123, hash_table);
	insert(143, hash_table);
	insert(1234, hash_table);
	insert(434, hash_table);
	insert(543, hash_table);
	insert(2345, hash_table);
	insert(425, hash_table);
	insert(634, hash_table);
	insert(643, hash_table);
	insert(754, hash_table);
	insert(36534, hash_table);
	insert(6342, hash_table);
	my_print(hash_table);


	struct list* l1 = find(425, hash_table);
	if (NULL == l1) {
		printf("Not find number!\n");
	}
	else {
		printf("\nnumber is: %d", l1->element);
	}

	struct list* l2 = my_delete(425, hash_table);
	if (NULL == l2) {
		printf("Not find!\n");
	}
	else {
		printf("\nnumber you delete is: %d\n", l2->element);
	}
	my_print(hash_table);

	return 0;
}