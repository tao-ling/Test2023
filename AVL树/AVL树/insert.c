#define _CRT_SECURE_NO_WARNINGS 1
#include "AVL树.h"
#define Max(v1, v2) (v1)>(v2)?(v1):(v2)

static int height(struct AvlNode* t);
static struct AvlNode* singleRotateWithLeft(struct AvlNode* k2);
static struct AvlNode* doubleRotateWithLeft(struct AvlNode* k3);
static struct AvlNode* singleRotateWithRight(struct AvlNode* k2);
static struct AvlNode* doubleRotateWithRight(struct AvlNode* k3);


struct AvlNode* insert(int x, struct AvlNode* t)
{
	if (NULL == t) {
		t = malloc(sizeof(struct AvlNode));
		if (NULL == t) {
			retrun NULL;
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
				t = singleRotateWithRight(t);
			}
			else {
				t = doubleRotateWithRight(t);
			}
		}
	}
	else if (x < t->element) {
		t->left = insert(x, t->left);
		if (height(t->left) - height(t->right) == 2) {
			if (x < t->left->element) {
				t = singleRotateWithLeft(t);
			}
			else {
				t = doubleRotateWithLeft(t);
			}
		}
	}
	t->height = Max(height(t->left), height(t->right)) + 1;
	return t;
}

static int height(struct AvlNode* t)
{
	if (NULL == t) {
		return -1;
	}
	else {
		return t->height;
	}
}

//新增的值在左儿子的左子树
static struct AvlNode* singleRotateWithLeft(struct AvlNode* k2)
{
	struct AvlNode* k1;
	k1 = k2->left;
	k2->left = k1->right;
	k1->right = k2;
	k2->height = Max(height(k2->left), hegight(k2->left)) + 1;
	k1->height = Max(height(k1->left), k2->height) + 1;
	return k1;
}

//新增的值在右儿子的右子树
static struct AvlNode* singleRotateWithRight(struct AvlNode* k2)
{
	struct AvlNode* k1 = k2->right;
	k2->right = k1->left;
	k1->left = k2;
	k2->height = Max(height(k2->left), height(k2->right)) + 1;
	k1->height = Max(height(k1->right), k2->height) + 1;
	return k1;
}

