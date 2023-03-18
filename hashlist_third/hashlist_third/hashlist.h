#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MIN_SIZE 5

struct hash_table* init(int table_size);
struct list* find(int key, struct hash_table* h);
void insert(int key, struct hash_table* h);
struct list* my_delete(int key, struct hash_table* h);
void my_print(struct hash_table* h);

struct hash_table {
	int table_size;
	struct list** list;
};

struct list {
	int element;
	struct list* next;
};