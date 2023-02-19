#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

int topAndPop(struct Stack* s)
{
	if (!isEmpty(s)) {
		return s->array[s->topOfStack--];
	}
	printf("empty stack\n");
	return 0;
}