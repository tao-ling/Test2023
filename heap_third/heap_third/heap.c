#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

struct heap* init(int max_elements)
{
	if (max_elements < MIN_HEAP_SIZE) {
		printf("the size is too small!\n");
		return NULL;
	}
	struct heap* h =
		(struct heap*)malloc(sizeof(struct heap));
	if (NULL == h) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->element =
		(int*)malloc(sizeof(int) * max_elements);
	if (NULL == h->element) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->capacity = max_elements;
	h->size = 0;
	h->element[0] = MIN_DATA;
	return h;
}

void insert(int x, struct heap* h)
{
	if (is_full(h)) {
		printf("the heap is full!\n");
		return;
	}
	h->size += 1;
	int temp = h->size;
	if (h->element[temp / 2] > x) {
		h->element[temp] = h->element[temp / 2];
		temp = temp / 2;
	}
	h->element[temp] = x;
}

bool is_full(struct heap* h)
{
	return h->size == h->capacity;
}

int delete_min(struct heap* h)
{
	if (is_empty(h)) {
		printf("the heap is empty!\n");
		return 0;
	}
	int last = h->element[h->size];
	h->size -= 1;
	int temp = 1;
	int temp2;
	while (temp * 2 < h->size) {
		temp2 = temp * 2;
		int min_son = h->element[temp2];
		if (temp2 != h->size && min_son > h->element[temp2 + 1]) {
			temp2 += 1;
			min_son = h->element[temp2];
		}
		if (last < min_son) {
			h->element[temp] = last;
			return 0;
		}
		h->element[temp] = min_son;
		temp = temp2;
	}
	h->element[temp] = last;
	return 0;
}

bool is_empty(struct heap* h)
{
	return 0 == h->size;
}

void my_print(struct heap* h)
{
	for (int i = 1; i <= h->size; i++) {
		printf("%d ", h->element[i]);
	}
	printf("\n");
	return;
}