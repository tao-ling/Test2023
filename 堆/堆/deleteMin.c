#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

int deleteMin(struct Heap* h)
{
	if (isEmpty(h)) {
		printf("Heap is empty!\n");
		return 0;
	}
	int last = h->elements[h->size];
	h->size--;
	int temp = 1;
	int temp2;
	while (temp * 2 < h->size) {
		int minSon = h->elements[temp * 2];
		temp2 = temp * 2;
		if (minSon > h->elements[temp * 2 + 1]) {
			minSon = h->elements[temp * 2 + 1];
			temp2 = temp * 2 + 1;
		}
		if (last < minSon) {
			h->elements[temp] = last;
			return 0;
		}
		h->elements[temp] = minSon;
		temp = temp2;
	}
	h->elements[temp] = last;
	return 0;
}