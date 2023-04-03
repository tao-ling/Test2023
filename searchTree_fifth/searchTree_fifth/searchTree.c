#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree_fifth.h"

static int find_min(struct tree* t);

struct tree* insert(int x, struct tree* t)
{
	if (NULL == t) {
		t = (struct tree*)malloc(sizeof(struct tree));
		if (NULL == t) {
			printf("out of space!\n");
			exit(EXIT_FAILURE);
		}
		t->element = x;
		t->left = NULL;
		t->right = NULL;
	}
	else if (x > t->element) {
		t->right = insert(x, t->right);
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
	}
	return t;
}

struct tree* my_delete(int x, struct tree* t)
{
	if (x > t->element) {
		t->right = my_delete(x, t->right);
	}
	else if (x < t->element) {
		t->left = my_delete(x, t->left);
	}
	else if (t->left && t->right) {
		t->element = find_min(t->right);
		my_delete(t->element, t->right);
	}
	else {
		if (NULL == t->left) {
			struct tree* temp = t->right;
			free(t);
			return temp;
		}
		else {
			struct tree* temp = t->left;
			free(t);
			return temp;
		}
	}
	return t;
}

void my_print(struct tree* t)
{
	if (NULL == t) {
		printf("the tree is empty!\n");
		return;
	}
	if (NULL != t->left) {
		my_print(t->left);
	}
	printf("%d ", t->element);
	if (NULL != t->right) {
		my_print(t->right);
	}
}

static int find_min(struct tree* t)
{
	if (NULL != t->left) {
		return find_min(t->left);
	}
	return t->element;
}