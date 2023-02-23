#define _CRT_SECURE_NO_WARNINGS 1
#include "AVL树.h"

struct AvlNode* findMin(struct AvlNode* t)
{
	if (NULL != t->left) {
		return findMin(t->left);
	}
	return t;
}