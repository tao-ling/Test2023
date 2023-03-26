#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree.h"

int main(void)
{
	struct tree* root = my_insert(6, NULL);
	my_insert(4, root);
	my_insert(8, root);
	my_insert(2, root);
	my_insert(5, root);
	my_insert(12, root);
	my_insert(14, root);
	my_insert(9, root);
	my_insert(1, root);
	my_print(root);
	printf("\n");

	my_delete(8, root);
	my_print(root);

	return 0;
}