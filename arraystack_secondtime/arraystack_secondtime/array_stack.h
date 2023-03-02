#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_SIZE 5

struct stack* create_stack(int capacity);
bool is_empty(struct stack* s);
bool is_full(struct stack* s);
void dispose_satck(struct stack* s);
void make_empty(struct stack* s);
void push(struct stack* s, int x);
int top(struct stack* s);
void pop(struct stack* s);
void top_and_pop(struct stack* s);
void print_stack(struct stack* s);

struct stack
{
	int* element;		//数组指针
	int top;			//记录栈顶的角标
	int capacity;		//栈的容量
};