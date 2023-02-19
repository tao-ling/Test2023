#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

void pop(struct Stack* s)
{
	if (isEmpty(s)) {
		printf("此栈为空，无法pop\n");
		return;
	}
	s->topOfStack--;
}