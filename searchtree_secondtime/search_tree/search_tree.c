#define _CRT_SECURE_NO_WARNINGS 1
#include "search_tree.h"

struct tree* make_empty(struct tree* t)
{
	if (NULL != t) {
		make_empty(t->left);
		make_empty(t->right);
		free(t);
	}
	return NULL;
}

struct tree* find(int x, struct tree* t)
{
	if (NULL == t) {
		return NULL;
	}
	if (x < t->element) {
		return find(x, t->left);
	}
	else if(x > t->element) {
		return find(x, t->right);
	}
	return t;
}

struct tree* find_min(struct tree* t)
{
	while (t->left != NULL) {
		return find_min(t->left);
	}
	return t;
}

struct tree* find_max(struct tree* t)
{
	while (NULL != t->right) {
		return find_max(t->right);
	}
	return t;
}

struct tree* insert(int x, struct tree* t)
{
	while (NULL != t) {
		if (x > t->element) {
			t->right = insert(x, t->right);
			return t;
		}
		else if (x < t->element) {
			t->left = insert(x, t->left);
			return t;
		}
	}
	struct tree* p = malloc(sizeof(struct tree));
	p->element = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}

struct tree* my_delete(int x, struct tree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return NULL;
	}
	if (x > t->element) {
		t->right = my_delete(x, t->right);
	}
	else if (x < t->element) {
		t ->left = my_delete(x, t->left);
	}
	else if (t->left && t->right) {
		struct tree* temp = find_max(x, t->left);
		t->element = temp->element;
		t->left = my_delete(temp->element, t->left);
	}
	else {
		struct tree* temp = t;
		if (NULL == t->left) {
			t = t->right;
		}
		else {
			t = t->left;
		}
		free(temp);
	}
	return t;
}

void print_tree(struct tree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return;
	}
	//打印左子树
	if (NULL != t->left) {
		print_tree(t->left);
	}
	//打印节点
	printf("%d ", t->element);
	//打印右子树
	if (NULL != t->right) {
		print_tree(t->right);
	}
}