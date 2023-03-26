#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree.h"

struct tree* my_insert(int x, struct tree* t)
{
	if (NULL == t) {
		struct tree* t =
			(struct tree*)malloc(sizeof(struct tree));
		if (NULL == t) {
			printf("out of space!\n");
			return NULL;
		}
		t->element = x;
		t->left = NULL;
		t->right = NULL;
		return t;
	}
	else if (x > t->element) {
		t->right = my_insert(x, t->right);
	}
	else if (x < t->element) {
		t->left = my_insert(x, t->left);
	}
	return t;
}

struct tree* my_delete(int x, struct tree* t)
{
	if (NULL == t) {
		printf("not find the number which you want to delete!\n");
		return NULL;
	}
	else if (x > t->element) {
		t->right = my_delete(x, t->right);
	}
	else if (x < t->element) {
		t->left = my_delete(x, t->left);
	}
	else if (t->left != NULL && t->left != NULL) {
		t->element = find_min(t->right);
		t->right = my_delete(t->element, t->right);
	}
	else {
		struct tree* temp = t;
		if (NULL == t->left) {
			t = t->right;
		}
		else if (NULL == t->right) {
			t = t->left;
		}
		free(temp);
	}
	return t;
}

struct tree* find(int x, struct tree* t)
{
	if (NULL == t) {
		return NULL;
	}
	else if (x > t->element) {
		return find(x, t->right);
	}
	else if (x < t->element) {
		return find(x, t->left);
	}
	return t;
}

void my_print(struct tree* t)
{
	//中序遍历
	if (NULL != t->left) {
		my_print(t->left);
	}
	printf("%d ", t->element);
	if (NULL != t->right) {
		my_print(t->right);
	}
}

int find_min(struct tree* t)
{
	if (NULL != t->left) {
		return find_min(t->left);
	}
	return t->element;
}