#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

bool isFull(struct Heap* h)
{
	return h->capacity == h->size;
}