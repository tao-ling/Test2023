#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

int main()
{
	struct AVLtree* min;
	struct AVLtree* max;
	struct AVLtree* node;
	struct AVLtree* root;
	root = insert(6, NULL);
	insert(4, root);
	insert(3, root);
	insert(2, root);
	insert(1, root);
	insert(8, root);
	print_AVL(root);

	//查找关键字为4的节点
	node = find(4, root);
	if (NULL == node) {
		printf("not find!\n");
	}
	else {
		printf("\nfind node is:%d\n", node->element);
	}

	//查找最小的节点
	min = find_min(root);
	printf("min is:%d\n", min->element);

	//查找最大的节点
	max = find_max(root);
	printf("max is:%d\n", max->element);

	return 0;
}