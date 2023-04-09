#pragma once
#include <stdio.h>
#include <stdlib.h>

struct hash_list* init(int capacity);
void insert(int x, struct hash_list* h);
void my_delete(int x, struct hash_list* h);
void my_print(struct hash_list* h);

struct hash_list {
	int capacity;
	struct list** list;
};

struct list {
	int element;
	struct list* next;
};