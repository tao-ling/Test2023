#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void Push(int x, struct Stack* s)
{
	struct Stack* p = malloc(sizeof(struct Stack));
	if (NULL == p) {
		printf("内存空间不足，push失败");
		exit(1);
	}
	p->element = x;
	p->next = s->next;
	s->next = p;
}