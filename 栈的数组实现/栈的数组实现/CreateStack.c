#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

struct Stack* createStack(int maxElements)
{
	struct Stack* s;
	if (maxElements < MinStackSize) {
		printf("栈的的容量过小");
		return NULL;
	}
	s = malloc(sizeof(struct Stack));
	if (NULL == s) {
		printf("内存空间不足，创建栈是失败");
		exit(1);
	}
	s->array = malloc(sizeof(int) * maxElements);
	if (NULL == s->array) {
		printf("内存空间不足，创建栈失败");
		exit(1);
	}
	s->capacity = maxElements;
	s->topOfStack = EmptyTos;
	return s;
}