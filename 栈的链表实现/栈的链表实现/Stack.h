#pragma once
/*
* 栈ADT的链表实现
*/

#include <stdio.h>
#include <stdlib.h>		//malloc
#include <stdbool.h>	//bool类型

struct Stack* CreateStack();

bool IsEmpty(struct Stack* s);
void DisposeStack(struct Stack* s);
void MakeEmpty(struct Stack* s);

void Push(int x, struct Stack* s);
int Top(struct Stack* s);
void Pop(struct Stack* s);

struct Stack
{
	int element;
	struct Stack* next;
};