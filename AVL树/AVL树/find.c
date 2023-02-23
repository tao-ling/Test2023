#define _CRT_SECURE_NO_WARNINGS 1
#include "AVL树.h"

struct AvlNode* find(int x, struct AvlNode* t)
{
	if (NULL == t) { ; }
	else if (x > t->element) {
		return find(x, t->right);
	}
	else if (x < t->element) {
		return find(x, t->left);
	}
	return t;
}