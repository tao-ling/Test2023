#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

void push(int x, struct Stack* s)
{
	if (s->capacity <= s->topOfStack + 1) {
		printf("栈的最大空间不足以再容纳数据了。");
		return;
	}
	s->array[++s->topOfStack] = x;
}