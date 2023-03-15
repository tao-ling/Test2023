#define _CRT_SECURE_NO_WARNINGS 1
#include "searchTree.h"

struct search_tree* insert(int x, struct search_tree* s)
{
	if (NULL != s) {
		if (x > s->element) {
			s->right = insert(x, s->right);
			return s;
		}
		if (x < s->element) {
			s->left = insert(x, s->left);
			return s;
		}
	}
	struct search_tree* p =
		malloc(sizeof(struct search_tree));
	if (NULL == p) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	p->element = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}

struct search_tree* my_delete(int x, struct search_tree* s)
{
	if (x > s->element) {
		s->right = my_delete(x, s->right);
		return s;
	}
	else if (x < s->element) {
		s->left = my_delete(x, s->left);
		return s;
	}
	else if (NULL == s->left || NULL == s->right)
	{
		struct search_tree* temp = s;
		if (NULL == s->left && NULL == s->right) {
			return NULL;
		}
		else if (NULL == s->left) {
			return s->right;
		}
		else if (NULL == s->right) {
			return s->left;
		}
		free(temp);
	}
	s->element = find_max(s->left);
	my_delete(find_max(s->left), s->left);
	return s;
}

int find_max(struct search_tree* s)
{
	if (NULL != s->right) {
		return find_max(s->right);
	}
	return s->element;
}

void print_tree(struct search_tree* s)
{
	if (NULL != s->left) {
		print_tree(s->left);
	}
	printf("%d ", s->element);
	if (NULL != s->right) {
		print_tree(s->right);
	}
}