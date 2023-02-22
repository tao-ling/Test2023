#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* find(int x, struct Tree* t)
{
	if (NULL == t) {
		return NULL;
	}
	if (x > t->element) {
		return find(x, t->right);
	}
	else if (x < t->element) {
		return find(x, t->left);
	}
	return t;
}