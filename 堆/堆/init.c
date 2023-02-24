#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

struct Heap* init(int maxElements)
{
	if (maxElements < MIN_HEAP_SIZE) {
		printf("Heap size is too small!\n");
		return NULL;
	}
	struct Heap* heap = malloc(sizeof(struct Heap));
	if (NULL == heap) {
		printf("Out of space!\n");
		return NULL;
	}
	heap->capacity = maxElements;
	heap->size = 0;
	heap->elements = malloc(sizeof(int) * (heap->capacity + 1));
	if (NULL == heap->elements) {
		printf("Out of space!\n");
		return NULL;
	}
	heap->elements[0] = MIN_DATA;
	return heap;
}