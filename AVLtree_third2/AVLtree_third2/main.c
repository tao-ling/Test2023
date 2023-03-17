#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

int main()
{
	struct AVLtree* min;
	struct AVLtree* Max;
	struct AVLtree* tree;
	struct AVLtree* root;
	root = insert(6, NULL);
	insert(4, root);
	insert(3, root);
	insert(2, root);
	insert(1, root);
	insert(8, root);
	my_print(root);
	return 0;
}