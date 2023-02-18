#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

struct List* CreateList()
{
	struct List* p = malloc(sizeof(struct List));
	if (p == NULL) {
		printf("内存空间不足，创建表头失败。\n");
		exit(1);
	}
	p->length = 0;
	return p;
}