#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

int main()
{
	struct Tree* min;
	struct Tree* max;
	struct Tree* node;
	struct Tree* root;
	root = insert(6, NULL);
	insert(4, root);
	insert(3, root);
	insert(2, root);
	insert(1, root);
	insert(8, root);
	printTree(root);

	//查找关键字为4的节点
	node = find(4, root);
	if (NULL == node) {
		printf("not find!\n");
	}
	else {
		printf("\nfind node is:%d\n", node->element);
	}

	//查找key最小的节点
	min = findMin(root);
	printf("min is:%d\n", min->element);

	//查找key最大的节点
	max = findMax(root);
	printf("max is:%d\n", max->element);

	//删除节点
	myDelete(2, root);
	printTree(root);

	//清空树
	makeEmpty(root);

	return 0;
}