#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

int FindKth(struct List* p, int position)
{
	if (position > p->length || position < 0) {
		printf("超出表达范围\n");
		return 0;
	}
	return p->element[position - 1];
}