#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

bool isEmpty(struct Heap* h)
{
	return 0 == h->size;
}