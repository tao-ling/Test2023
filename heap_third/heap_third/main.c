#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

int main()
{
	struct heap* h = init(20);
	insert(23, h);
	insert(63, h);
	insert(3453, h);
	insert(53, h);
	insert(6435, h);
	insert(4523, h);
	insert(452, h);
	insert(45, h);
	my_print(h);

	delete_min(h);
	delete_min(h);
	delete_min(h);
	delete_min(h);
	my_print(h);

	return 0;
}