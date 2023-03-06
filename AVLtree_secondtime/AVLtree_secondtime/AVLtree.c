#define _CRT_SECURE_NO_WARNINGS 1
#include "AVLtree.h"
#define MAX(v1, v2) (v1)>(v2) ? (v1):(v2)

static int height(struct AVLtree* t);
static struct AVLtree* singal_roate_left(struct AVLtree* k1);
static struct AVLtree* singal_roate_right(struct AVLtree* k1);
static struct AVLtree* double_roate_left(struct AVLtree* k1);
static struct AVLtree* double_roate_right(struct AVLtree* k1);


struct AVLtree* make_empty(struct AVLtree* t)
{
	if (NULL != t) {
		make_empty(t->left);
		make_empty(t->right);
		free(t);
	}
	return NULL;
}

struct AVLtree* find(int x, struct AVLtree* t)
{
	if (NULL == t) {
		printf("not find!\n");
		return NULL;
	}
	if (x > t->element) {
		return find(x, t->right);
	}
	else if (x < t->element) {
		return find(x, t->left);
	}
	return t;
}

struct AVLtree* find_min(struct AVLtree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return NULL;
	}
	if (NULL != t->left) {
		return find_min(t->left);
	}
	return t;
}

struct AVLtree* find_max(struct AVLtree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return NULL;
	}
	if (NULL != t->right) {
		return find_max(t->right);
	}
	return t;
}

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
		if (height(t->right) - height(t->left) == 2) {
			if (x > t->right->element) {
				t = singal_roate_right(t);
			}
			else if (x < t->right->element) {
				t = double_roate_right(t);
			}
		}
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
		if (height(t->left) - height(t->right) == 2) {
			if (x < t->left->element) {
				t = singal_roate_left(t);
			}
			else if (x < t->left->element) {
				t = double_roate_left(t);
			}
		}
	}
	t->height = MAX(height(t->left), height(t->right)) + 1;
	return t;
}

static int height(struct AVLtree* t)
{
	if (NULL == t) {
		return t;
	}
	else {
		return t->height;
	}
}

//新增的值在左儿子的左子树
static struct AVLtree* singal_roate_left(struct AVLtree* k1)
{
	struct AVLtree* k2 = k1->left;
	k1->left = k2->right;
	k2->right = k1;
	k1->height = MAX(height(k1->left), height(k1->right)) + 1;
	k2->height = MAX(height(k2->left), height(k2->right)) + 1;
	return k2;
}

//新增的值在右儿子的右子树
static struct AVLtree* singal_roate_right(struct AVLtree* k1)
{
	struct AVLtree* k2 = k1->right;
	k1->right = k2->left;
	k2->left = k1;
	k1->height = MAX(height(k1->left), height(k1->right)) + 1;
	k2->height = MAX(height(k2->left), height(k2->right)) + 1;
	return k2;
}

//新增的值在右儿子的左子树
static struct AVLtree* double_roate_right(struct AVLtree* k1)
{
	k1->right = double_roate_left(k1->right);
	return singal_roate_right(k1);
}
//新增的值在左儿子的右子树
static struct AVLtree* double_roate_left(struct AVLtree* k1)
{
	k1->left = double_roate_right(k1->left);
	return singal_roate_left(k1);
}

void print_AVL(struct AVLtree* t)
{
	if (NULL == t) {
		printf("this tree is empty!\n");
		return;
	}
	//中序遍历
	//打印左子树
	if (NULL != t->left) {
		print_AVL(t->left);
	}
	//打印节点
	printf("%d ", t->element);
	//打印右子树
	if (NULL != t->right) {
		print_AVL(t->right);
	}
}