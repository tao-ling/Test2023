#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void DisposeStack(struct Stack* s)
{
	struct Stack* p = s->next;
	if (NULL == s->next) {
		printf("本栈为空");
		return;
	}
	while (NULL != p) {
		printf("%d ", p->element);
		p = p->next;
	}
	printf("\n");
}