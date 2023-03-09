#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

struct heap* init(int max_size)
{
	if (max_size < MIN_HEAP_SIZE) {
		printf("this size is too small!\n");
		return NULL;
	}
	struct heap* h = malloc(sizeof(struct heap));
	if (NULL == h) {
		printf("out of space!\n");
		exit(1);
	}
	h->capacity = max_size;
	h->size = 0;
	h->element = malloc(sizeof(int) * (h->capacity+1));
	if (NULL == h->element) {
		printf("out of space!\n");
		exit(1);
	}
	h->element[0] = MIN_DATA;
	return h;
}

int delete_min(struct heap* h)
{
	if (is_empty(h)) {
		printf("this heap is empty!\n");
		return 0;
	}
	int min = h->element[1];
	int last_element = h->element[h->size];
	h->size--;
	int empty_position = 1;
	while (empty_position * 2 <= h->size) {
		int min_son_position = empty_position * 2;
		if (min_son_position != h->size && 
			h->element[min_son_position] > h->element[min_son_position + 1]) {
			min_son_position++;
		}
		if (last_element > h->element[min_son_position]) {
			h->element[empty_position] = h->element[min_son_position];
			empty_position = min_son_position;
		}
		else {
			break;
		}
	}
	h->element[empty_position] = last_element;
	return min;
}

bool is_full(struct heap* h)
{
	return h->size == h->capacity;
}

bool is_empty(struct heap* h)
{
	return 0 == h->size;
}

void print_heap(struct heap* h)
{
	if (0 == h->size) {
		printf("this heap is empty!\n");
		return;
	}
	for (int i = 1; i <= h->size; i++) {
		printf("%d ", h->element[i]);
	}
}

void insert(int x, struct heap* h)
{
	if (is_full(h)) {
		printf("this heap is full!\n");
		return;
	}
	h->size++;
	int empty_position = h->size;
	while (h->element[empty_position / 2] > x) {
		h->element[empty_position] = h->element[empty_position / 2];
		empty_position /= 2;
	}
	h->element[empty_position] = x;
}