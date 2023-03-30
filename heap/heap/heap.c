#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

struct heap* init(int capacity)
{
	if (capacity < MIN_CAPACITY) {
		printf("the capacity is too small!\n");
		return NULL;
	}
	struct heap* h =
		(struct heap*)malloc(sizeof(struct heap));
	if (NULL == h) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->element = 
		(int*)malloc(sizeof(int) * capacity);
	if (NULL == h->element) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->capacity = capacity;
	h->size = 0;
	h->element[0] = MIN_NUMBER;
	return h;
}

void insert(int x, struct heap* h)
{
	if (h->size == h->capacity) {
		printf("the heap is full!\n");
		return;
	}
	int temp = ++h->size;
	while (h->element[temp/2] > x) {
		h->element[temp] = h->element[temp / 2];
		temp = temp / 2;
	}
	h->element[temp] = x;
}

int delete_min(struct heap* h)
{
	int temp = 1;
	int min = h->element[1];
	int last = h->element[h->size--];
	while (temp * 2 < h->size) {
		int min_son = temp * 2;
		if (temp * 2 != h->size && 
			h->element[min_son] > h->element[temp * 2 + 1]) {
			min_son += 1;
		}
		if (last < h->element[min_son]) {
			h->element[temp] = last;
			return min;
		}
		h->element[temp] = h->element[min_son];
		temp = min_son;
	}
	h->element[temp] = last;
	return min;
}

void my_print(struct heap* h)
{
	for (int i = 1; i <= h->size; i++) {
		printf("%d ", h->element[i]);
	}
}