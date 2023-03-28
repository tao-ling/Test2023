#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"
#define MAX(v1, v2) ((v1)>(v2)?(v1):(v2))

static int height(struct AVLtree* t);
static struct AVLtree* singal_roate_right(struct AVLtree* t);
static struct AVLtree* singal_roate_left(struct AVLtree* t);
static struct AVLtree* double_roate_right(struct AVLtree* t);
static struct AVLtree* double_roate_left(struct AVLtree* t);
static struct AVLtree* create(int x, struct AVLtree* left, struct AVLtree* right);

struct AVLtree* insert(int x, struct AVLtree* t)
{
	if (NULL == t) {
		t = create(x, NULL, NULL);
		if (NULL == t) {
			printf("out of space!\n");
			return NULL;
		}
	}
	else if (x > t->element) {
		t->right = insert(x, t->right);
		if (2 == height(t->right) - height(t->left)) {
			if (x > t->right->element) {
				t = singal_roate_right(t);
			}
			else {
				t = double_roate_right(t);
			}
		}
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
		if (2 == height(t->left) - height(t->right)) {
			if (x < t->left->element) {
				t = singal_roate_left(t);
			}
			else {
				t = double_roate_left(t);
			}
		}
	}
	else {
		printf("添加失败，不允许添加已经存在的数字！\n");
	}
	t->height = MAX(height(t->left), height(t->right)) + 1;
	return t;
}

int height(struct AVLtree* t)
{
	return (NULL == t) ? -1 : t->height;
}

struct AVLtree* singal_roate_right(struct AVLtree* t)
{
	struct AVLtree* p = t->right;
	t->right = p->left;
	p->left = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	p->height = MAX(height(p->right), t->height) + 1;
	return p;
}

struct AVLtree* singal_roate_left(struct AVLtree* t)
{
	struct AVLtree* p = t->left;
	t->left = p->right;
	p->right = t;
	t->height = MAX(height(t->left), height(t->right)) + 1;
	p->height = MAX(height(p->left), t->height) + 1;
	return p;
}

struct AVLtree* double_roate_right(struct AVLtree* t)
{
	t->right = singal_roate_left(t->right);
	return singal_roate_right(t);
}

struct AVLtree* double_roate_left(struct AVLtree* t)
{
	t->left = singal_roate_right(t->left);
	return singal_roate_left(t);
}

void my_print(struct AVLtree* t)
{
	if (t != NULL) {
		my_print(t->left);
		printf("%d ", t->element);
		my_print(t->right);
	}
}

struct AVLtree* create(int x, struct AVLtree* left, struct AVLtree* right)
{
	struct AVLtree* p =  malloc(sizeof(struct AVLtree));
	if (NULL == p) {
		return NULL;
	}
	p->element = x;
	p->height = 0;
	p->left = left;
	p->right = right;
	return p;
}