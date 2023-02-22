#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

//中序遍历打印树中的KEY
void printTree(struct Tree* t)
{
	if (NULL == t) {
		printf("Empty tree!\n");
		return;
	}
	//打印左子树
	if (t->left != NULL) {
		printTree(t->left);
	}
	//打印节点
	printf("%d ", t->element);
	//打印右子树
	if (t->right != NULL) {
		printTree(t->right);
	}
}