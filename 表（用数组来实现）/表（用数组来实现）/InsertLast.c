#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

void InsertLast(struct List* p, int x)
{
	if (p->length - 1 >= MAX_SIZE) {
		printf("数组空间不足");
		return;
	}
	p->element[p->length] = x;
	p->length++;
}