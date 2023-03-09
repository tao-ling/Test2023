#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_HEAP_SIZE 5
#define MIN_DATA -999

//小跟堆
struct heap* init(int max_size);
void insert(int x, struct heap* h);
int delete_min(struct heap* h);
void print_heap(struct heap* h);
bool is_empty(struct heap* h);
bool is_full(struct heap* h);

struct heap
{
	int capacity;
	int size;
	int* element;
};