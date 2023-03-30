#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MIN_CAPACITY 5
#define MIN_NUMBER -999

struct heap* init(int capacity);
void insert(int x, struct heap* h);
int delete_min(struct heap* h);
void my_print(struct heap* h);

struct heap {
	int capacity;
	int size;
	int* element;
};