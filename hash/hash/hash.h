#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MIN_CAPACITY 5

int hash(int x, struct hash_table* h);
struct  hash_table* init(int capacity);
void insert(int x, struct hash_table* h);
void my_delete(int x, struct hash_table* h);
void my_print(struct hash_table* h);

struct hash_table {
	struct link** table;
	int capacity;
};

struct link {
	int element;
	struct link* next;
};