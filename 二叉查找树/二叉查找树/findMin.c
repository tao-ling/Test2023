#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* findMin(struct Tree* t)
{
	if (NULL == t) {
		return NULL;
	}
	if (t->left != NULL) {
		return findMin(t->left);
	}
	return t;
}