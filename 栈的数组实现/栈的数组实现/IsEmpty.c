#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

bool isEmpty(struct Stack* s)
{
	return EmptyTos == s->topOfStack;
}