#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

void printHeap(struct Heap* h)
{
	for (int i = 1; i <= h->size; i++) {
		printf("%d ", h->elements[i]);
	}
	printf("\n");
}