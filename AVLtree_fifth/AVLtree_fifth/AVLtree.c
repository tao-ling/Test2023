#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"

#define MAX(v1, v2) ((v1)>(v2)?(v1):(v2))

static int height(struct tree* t);
static struct tree* ll_rotate(struct tree* t);
static struct tree* lr_rotate(struct tree* t);
static struct tree* rr_rotate(struct tree* t);
static struct tree* rl_rotate(struct tree* t);

struct tree* insert(int x, struct tree* t)
{
	if (NULL == t) {
		t =
			(struct tree*)malloc(sizeof(struct tree));
		if (NULL == t) {
			printf("out of space!\n");
			exit(EXIT_FAILURE);
		}
		t->height = 0;
		t->x = x;
		t->left = NULL;
		t->right = NULL;
	}
	else if (x > t->x) {
		t->right = insert(x, t->right);
		if (2 == height(t->right) - height(t->left)) {
			if (x > t->right->x) {
				t = rr_rotate(t);
			}
			else {
				t = rl_rotate(t);
			}
		}
	}
	else if (x < t->x) {
		t->left = insert(x, t->left);
		if (2 == height(t->left) - height(t->right)) {
			if (x < t->left->x) {
				t = ll_rotate(t);
			}
			else {
				t = lr_rotate(t);
			}
		}
	}
	return t;
}

static int height(struct tree* t)
{
	return NULL == t ? -1 : t->height;
}

static struct tree* ll_rotate(struct tree* t)
{
	struct tree* temp = t->left;
	t->left = temp->right;
	temp->right = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	temp->height = MAX(height(temp->left), t->height) + 1;
	return temp;
}

static struct tree* lr_rotate(struct tree* t)
{
	t->left = rr_rotate(t->left);
	return ll_rotate(t);
}

static struct tree* rr_rotate(struct tree* t)
{
	struct tree* temp = t->right;
	t->right = temp->left;
	temp->left = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	temp->height = MAX(height(t->right), t->height) + 1;
}

static struct tree* rl_rotate(struct tree* t)
{
	t->right = ll_rotate(t->right);
	return rr_rotate(t);
}

void my_print(struct tree* t)
{
	if (NULL != t->left) {
		my_print(t->left);
	}
	printf("%d ", t->x);
	if (NULL != t->right) {
		my_print(t->right);
	}
}