#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree.h"

int main(void)
{
	struct search_tree* root = insert(6, NULL);
	insert(1, root);
	insert(3, root);
	insert(8, root);
	insert(10, root);
	insert(89, root);
	insert(67, root);
	insert(67, root);
	print_tree(root);
	printf("\n");

	my_delete(3, root);
	my_delete(8, root);
	print_tree(root);

	return 0;
}