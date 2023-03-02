#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

struct Stack* create_stack()
{
	struct Stack* s = malloc(sizeof(struct Stack));
	if (NULL == s) {
		printf("not enough memory!\n");
		exit(1);
	}
	s->next = NULL;
	return s;
}

bool is_empty(struct Stack* s)
{
	return NULL == s->next;
}

void dispose_stack(struct Stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return;
	}
	for (struct Stack* temp = s->next;
		temp != NULL;
		temp = temp->next) {
		printf("%d ", temp->element);
	}
}

void make_empty(struct Stack* s)
{
	if (is_empty(s)) {
		printf("must use createstack first!\n");
		return;
	}
	else {
		while (!is_empty(s)) {
			pop(s);
		}
	}
}

void push(struct Stack* s, int x)
{
	struct Stack* p = malloc(sizeof(struct Stack));
	if (NULL == p) {
		printf("not enough memory!\n");
		return;
	}
	p->element = x;
	p->next = s->next;
	s->next = p;
}

int top(struct Stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return -1;
	}
	return s->next->element;
}

void pop(struct Stack* s)
{
	if (NULL == s->next) {
		printf("this stack is empty!\n");
		return;
	}
	s->next = s->next->next;
}