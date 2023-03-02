#define _CRT_SECURE_NO_WARNINGS 1
#include "array_stack.h"

struct stack* create_stack(int capacity)
{
	if (capacity < MIN_SIZE) {
		printf("capacity is too small!\n");
		return NULL;
	}
	struct stack* s = malloc(sizeof(struct stack));
	if (NULL == s) {
		printf("not enouh memory!\n");
		exit(1);
	}
	s->element = malloc(sizeof(int) * capacity);
	if (NULL == s->element) {
		printf("not enouh memory!\n");
		exit(1);
	}
	s->capacity = capacity;
	s->top = -1;
	return s;
}

bool is_empty(struct stack* s)
{
	return -1 == s->top;
}

bool is_full(struct stack* s)
{
	return s->top + 1 == s->capacity;
}

void dispose_satck(struct stack* s)
{
	if (s != NULL) {
		free(s->element);
		s->element = NULL;
		free(s);
		s = NULL;
	}
}

void print_stack(struct stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return;
	}
	for (int i = 0; i <= s->top; i++) {
		printf("%d ", s->element[i]);
	}
}

void make_empty(struct stack* s)
{
	s->capacity = -1;
}

void push(struct stack* s, int x)
{
	if (s->top + 1 == s->capacity) {
		printf("not enough air!\n");
		return;
	}
	s->top++;
	s->element[s->top] = x;
}

int top(struct stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return 0;
	}
	return s->element[s->top];
}

void pop(struct stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return;
	}
	s->top--;
}

void top_and_pop(struct stack* s)
{
	if (is_empty(s)) {
		printf("this stack is empty!\n");
		return 0;
	}
	return s->element[s->top--];
}