#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

int main(void)
{
	struct heap* h = init(20);
	insert(56, h);
	insert(89, h);
	insert(6, h);
	insert(5, h);
	insert(34, h);
	insert(30, h);
	insert(63, h);
	insert(58, h);
	insert(20, h);
	my_print(h);
	printf("\n");

	delete_min(h);
	my_print(h);
	printf("\n");
	delete_min(h);
	my_print(h);
	printf("\n");
	delete_min(h);
	my_print(h);

	return 0;
}