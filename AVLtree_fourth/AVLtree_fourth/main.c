#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

int main()
{
	struct AVLtree* root = insert(6, NULL);
	root = insert(3, root);
	root = insert(1, root);
	root = insert(8, root);
	root = insert(9, root);
	root = insert(90, root);
	root = insert(23, root);
	root = insert(4, root);
	root = insert(54, root);
	my_print(root);

	return 0;
}