#define _CRT_SECURE_NO_WARNINGS 1
#include "search_tree.h"

int main()
{
	struct tree* min;
	struct tree* max;
	struct tree* node;
	struct tree* root;
	root = insert(6, NULL);
	insert(4, root);
	insert(3, root);
	insert(2, root);
	insert(1, root);
	insert(8, root);
	insert(9, root);
	print_tree(root);

	//查找关键字为4的节点
	node = find(4, root);
	if (NULL == node) {
		printf("not find!\n");
	}
	else {
		printf("\nfind node is :%d", node->element);
	}

	//查找key最大的节点
	max = find_max(root);
	printf("\nmax is:%d\n", max->element);

	//查找key最大的节点
	min = find_min(root);
	printf("min is:%d\n", min->element);

	//删除节点
	my_delete(2, root);
	print_tree(root);

	//清空树
	make_empty(root);

	return 0;
}