#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

void insert(int x, struct Heap* h)
{
	if (isFull(h)) {
		printf("Heap is Full\n");
		return;
	}
	h->size++;
	int temp;
	temp = h->size;
	while (h->elements[temp / 2] > x) {
		h->elements[temp] = h->elements[temp / 2];
		temp = temp / 2;
	}
	h->elements[temp] = x;
}