#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

void InsertFirst(struct List* p, int x)
{
	if (p->length-1 >= MAX_SIZE) {
		printf("数组空间不足\n");
		return;
	}
	for (int i = p->length; i > 0; i--) {
		p->element[i] = p->element[i - 1];
	}
	p->element[0] = x;
	p->length++;
}