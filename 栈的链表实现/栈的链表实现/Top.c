#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

int Top(struct Stack* s)
{
	if (NULL == s->next) {
		printf("此栈为空栈，违法读取栈顶");
		return 0;
	}
	return s->next->element;
}