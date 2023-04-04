#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

int main(void)
{
	struct tree* root = insert(6, NULL);
	root = insert(4, root);
	root = insert(345, root);
	root = insert(54, root);
	root = insert(1, root);
	root = insert(45, root);
	root = insert(90, root);
	root = insert(7, root);
	root = insert(2, root);
	root = insert(3, root);
	root = insert(23, root);
	my_print(root);
	

	return 0;
}