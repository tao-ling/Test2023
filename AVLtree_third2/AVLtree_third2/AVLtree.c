#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"
#define Max(v1, v2) (v1)>(v2)?(v1):(v2)

static struct AVLtree* singal_rotate_left(struct AVLtree* k2);
static struct AVLtree* double_rotate_left(struct AVLtree* k3);
static struct AVLtree* singal_rotate_right(struct AVLtree* k2);
static struct AVLtree* double_rotate_right(struct AVLtree* k3);
void my_print(struct AVLtree* t);

static int height(struct AVLtree* t)
{
	if (NULL == t) {
		return -1;
	}
	else {
		return t->height;
	}
}

struct AVLtree* insert(int x, struct AVLtree* t)
{
	if (NULL == t) {
		t = malloc(sizeof(struct AVLtree));
		if (NULL == t) {
			printf("Out of space!\n");
			exit(EXIT_FAILURE);
		}
		else {
			t->element = x;
			t->height = 0;
			t->left = t->right = NULL;
		}
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
		if (height(t->left) - height(t->right) == 2) {
			if (x < t->left->element) {
				t = singal_rotate_left(t);
			}
			else {
				t = double_rotate_left(t);
			}
		}
	}
	else if (x > t->element) {
		t->right = insert(x, t->right);
		if (height(t->right) - height(t->left) == 2) {
			if (x > t->right->element) {
				t = singal_rotate_right(t);
			}
			else {
				t = double_rotate_right(t);
			}
		}
	}
	t->height = Max(height(t->left), height(t->right)) + 1;
	return t;
}

static struct AVLtree* singal_rotate_left(struct AVLtree* k2)
{
	struct AVLtree* k1;
	k1 = k2->left;
	k2->left = k1->right;
	k1->right = k2;
	k2->height = Max(height(k2->left), height(k2->right)) + 1;
	k1->height = Max(height(k1->left), k2->height) + 1;
	return k1;
}

static struct AVLtree* double_rotate_left(struct AVLtree* k3)
{
	k3->left = singal_rotate_right(k3->left);
	return singal_rotate_left(k3);
}

static struct AVLtree* singal_rotate_right(struct AVLtree* k2)
{
	struct AVLtree* k1;
	k1 = k2->right;
	k2->right = k1->left;
	k1->left = k2;
	k2->height = Max(height(k2->left), height(k2->right)) + 1;
	k1->height = Max(height(k1->right), k2->height) + 1;
	return k1;
}

static struct AVLtree* double_rotate_right(struct AVLtree* k3)
{
	k3->right = singal_rotate_left(k3->right);
	return singal_rotate_right(k3);
}

void my_print(struct AVLtree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
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