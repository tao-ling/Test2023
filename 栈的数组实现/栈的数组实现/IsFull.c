#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

bool isFull(struct Stack* s)
{
	return s->capacity == s->topOfStack + 1;
}