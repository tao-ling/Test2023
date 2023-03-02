#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack* create_stack();
bool is_empty(struct Stack* s);
void dispose_stack(struct Stack* s);
void make_empty(struct Stack* s);
void push(struct Stack* s, int x);
int top(struct Stack* s);
void pop(struct Stack* s);

struct Stack
{
	int element;
	struct Stack* next;
};