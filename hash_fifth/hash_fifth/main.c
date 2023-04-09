#define _CRT_SECURE_NO_WARNINGS 1
#include "hash.h"

int main(void)
{
	struct hash_list* h = init(11);
	insert(34, h);
	insert(34, h);
	insert(34, h);
	insert(52, h);
	insert(99024, h);
	insert(342, h);
	insert(412, h);
	insert(3452, h);
	insert(87, h);
	my_print(h);
	printf("\n");
	my_delete(34, h);
	my_delete(34, h);
	my_print(h);

	return 0;

}