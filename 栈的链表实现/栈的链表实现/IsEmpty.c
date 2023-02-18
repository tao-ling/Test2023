#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

bool IsEmpty(struct Stack* s)
{
	return NULL == s->next;
}