#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_HEAP_SIZE 5
#define MIN_DATA -999

struct heap* init(int max_elements);
void insert(int x, struct heap* h);
int delete_min(struct heap* h);
void my_print(struct heap* h);

bool is_empty(struct heap* h);
bool is_full(struct heap* h);

struct heap {
	int capacity;
	int size;
	int* element;
};