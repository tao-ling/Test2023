#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

void PrintList(struct List* p)
{
	printf("该表的元素分别为：");
	for (int i = 0; i < p->length; i++) {
		printf("%d ", p->element[i]);
	}
	printf("\n");
}