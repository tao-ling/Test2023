#define _CRT_SECURE_NO_WARNINGS 1
#include "AVL树.h"

struct AvlNode* makeEmpty(struct AvlNode* t)
{
	if (NULL != t)
	{
		makeEmpty(t->left);
		makeEmpty(t->right);
		free(t);
	}
	return NULL;
}