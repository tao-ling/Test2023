#pragma once
/*
* 栈的数组实现
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define EmptyTos (-1)
#define MinStackSize (5)

struct Stack* createStack(int MaxElements);

bool isEmpty(struct Stack* s);
bool isFull(struct Stack* s);		//判断栈是否满
void disposeStack(struct Stack* s);	//释放栈的内存
void makeEmpty(struct Stack* s);

void push(int x, struct Stack* s);
int top(struct Stack* s);
void pop(struct Stack* s);

int topAndPop(struct Stack* s);

void printStack(struct Stack* s);	//打印栈

struct Stack
{
	int topOfStack;		//栈顶角标，用于控制栈的有效数据范围
	int capacity;		//栈的容量
	int* array;			//指针，指向一维数组首元素的地址
};