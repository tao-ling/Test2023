#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree_fifth.h"

int main(void)
{
	struct tree* t = insert(6, NULL);
	insert(34, t);
	insert(1, t);
	insert(3, t);
	insert(64, t);
	insert(7, t);
	insert(4, t);
	insert(5, t);
	insert(10, t);
	my_print(t);
	

	return 0;
}