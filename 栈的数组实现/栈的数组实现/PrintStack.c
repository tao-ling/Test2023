#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

void printStack(struct Stack* s)
{
	if (s->topOfStack == -1) {
		printf("此栈为空，无法打印");
		return;
	}
	for (int i = 0; i <= s->topOfStack; i++) {
		printf("%d ", s->array[i]);
	}
}