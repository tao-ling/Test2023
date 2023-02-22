#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* findMax(struct Tree* t)
{
	if (NULL == t) {
		return NULL;
	}
	if (NULL != t->right)
	{
		return findMax(t->right);
	}
	return t;
}