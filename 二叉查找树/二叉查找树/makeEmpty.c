#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* makeEmpty(struct Tree* t)
{
	if (t != NULL) {
		makeEmpty(t->left);
		makeEmpty(t->right);
		free(t);
	}
	return NULL;
}