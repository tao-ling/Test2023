#define _CRT_SECURE_NO_WARNINGS 1
#include "二叉查找树.h"

struct Tree* myDelete(int x, struct Tree* t)
{
	struct Tree* temp;
	if (NULL == t) {
		printf("Tree is empty!\n");
	}
	else if (x > t->element) {
		t->right = myDelete(x, t->right);
	}
	else if (x < t->element) {
		t->left = myDelete(x, t->left);
	}
	else if (t->left && t->right) {
		temp = findMin(t->right);
		t->element = temp->element;
		t->right = myDelete(temp->element, t->right);
	}
	else {
		temp = t;
		if (t->left == NULL) {
			t = t->right;
		}
		else if (t->right == NULL) {
			t = t->left;
		}
		free(temp);
	}
	return t;
}