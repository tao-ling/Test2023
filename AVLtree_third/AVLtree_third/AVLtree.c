#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

static struct AVLtree* singal_right(struct AVLtree* t);
static struct AVLtree* singal_left(struct AVLtree* t);
static struct AVLtree* double_right(struct AVLtree* t);
static struct AVLtree* double_left(struct AVLtree* t);
static int height(struct AVLtree* t);

struct AVLtree* insert(int x, struct AVLtree* t)
{
	if (NULL == t) {
		t = malloc(sizeof(struct AVLtree));
		if (NULL == t) {
			return NULL;
		}
		t->element = x;
		t->left = NULL;
		t->right = NULL;
		t->height = 0;
	}
	else if (x > t->element) {
		t->right = insert(x, t->right);
		if (2 == height(t->right) - height(t->left)) {
			if (x > t->right->element) {
				t = singal_right(t);
			}
			else if(x < t->right->element) {
				t = double_right(t);
			}
		}
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
		if (2 == height(t->left) - height(t->right)) {
			if (x < t->left->element) {
				t = singal_left(t);
			}
			else if(x < t->left->element) {
				t = double_left(t);
			}
		}
	}
	t->height = MAX(height(t->left), height(t->right)) + 1;
	return t;
}

static struct AVLtree* singal_right(struct AVLtree* t)
{
	struct AVLtree* temp = t->right;
	t->right = temp->left;
	temp->left = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	temp->height = MAX(height(temp->right), height(t->left)) + 1;
	return temp;
}

static struct AVLtree* singal_left(struct AVLtree* t)
{
	struct AVLtree* temp = t->left;
	t->left = temp->right;
	temp->right = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	temp->height = MAX(height(temp->left), height(temp->right)) + 1;
	return temp;
}

static struct AVLtree* double_right(struct AVLtree* t)
{
	t->right = singal_left(t->right);
	return singal_right(t);
}

static struct AVLtree* double_left(struct AVLtree* t)
{
	t->left = singal_right(t->left);
	return singal_left(t);
}

static int height(struct AVLtree* t)
{
	if (NULL == t) {
		return -1;
	}
	else {
		return t->height;
	}
}

struct AVLtree* find(int x, struct AVLtree* t)
{
	if (NULL == t) {
		printf("Not find!\n");
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

struct AVLtree* find_max(struct AVLtree* t)
{
	if (NULL != t->right) {
		return find_max(t->right);
	}
	return t;
}

struct AVLtree* find_min(struct AVLtree* t)
{
	if (NULL != t->left) {
		return find_min(t->left);
	}
	return t;
}

void print_AVL(struct AVLtree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return;
	}
	if (NULL != t->left) {
		print_AVL(t->left);
	}
	printf("%d ", t->element);
	if (NULL != t->right) {
		print_AVL(t->right);
	}
}