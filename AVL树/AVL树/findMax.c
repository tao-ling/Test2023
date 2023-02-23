#define _CRT_SECURE_NO_WARNINGS 1
#include "AVL树.h"

struct AvlNode* findMax(struct AvlNode* t)
{
	if (NULL != t->right) {
		return findMax(t->right);
	}
	return t;
}