#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* insert(int x, struct Tree* t)
{
	if (NULL == t) {
		t = malloc(sizeof(struct Tree));
		if (NULL == t) {
			printf("内存空间不足，插入失败\n");
			return NULL;
		}
		t->element = x;
		t->left = NULL;
		t->right = NULL;
	}
	else if (x > t->element) {
		t->right = insert(x, t->right);
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
	}
	return t;
}