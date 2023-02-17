#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//创建表头
struct Node* CreateHeaderNode()
{
	struct Node* p = malloc(sizeof(struct Node));
	if (p == NULL) {
		printf("内存空间内存不足，创建表头失败");
		exit(1);
	}
	p->next = NULL;
	return p;
}