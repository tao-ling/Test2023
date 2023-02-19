#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

int top(struct Stack* s)
{
	if (isEmpty(s)) {
		printf("此栈为空，无法打印栈顶");
		return 0;
	}
	return s->array[s->topOfStack];
}