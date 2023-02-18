#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

struct Stack* CreateStack()
{
	struct Stack* p = malloc(sizeof(struct Stack));
	if (NULL == p) {
		printf("内存空间不足，创建空栈失败");
		exit(1);
	}
	p->next = NULL;
	return p;
}