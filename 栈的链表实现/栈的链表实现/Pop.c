#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void Pop(struct Stack* s)
{
	s->next = s->next->next;
}