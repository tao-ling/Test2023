#define _CRT_SECURE_NO_WARNINGS 1
#include "hash.h"

int main(void)
{
	struct hash_table* h = init(11);
	insert(1, h);
	insert(1, h);
	insert(23, h);
	insert(34, h);
	insert(45, h);
	insert(45, h);
	insert(65, h);
	insert(45, h);
	insert(89, h);
	insert(2345, h);
	insert(456, h);
	my_print(h);
	printf("\n");

	my_delete(45, h);
	my_print(h);

	return 0;
}
