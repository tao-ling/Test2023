#define _CRT_SECURE_NO_WARNINGS 1
#include "hash.h"

int hash(int x, struct hash_table* h)
{
	return x % h->capacity;
}

struct  hash_table* init(int capacity)
{
	if (capacity < MIN_CAPACITY) {
		printf("the capacity is too small!\n");
		return NULL;
	}
	struct hash_table* h =
		(struct hash_table*)malloc(sizeof(struct hash_table));
	if (NULL == h) {
		printf("out of sapce!\n");
		exit(EXIT_FAILURE);
	}
	h->table =
		(struct table**)malloc(sizeof(struct table*) * capacity);
	if (NULL == h->table) {
		printf("out of sapce!\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < capacity; i++) {
		h->table[i] =
			(struct hash_table*)malloc(sizeof(struct hash_table));
		if (NULL == h->table[i]) {
			printf("out of sapce!\n");
			exit(EXIT_FAILURE);
		}
		h->table[i]->next = NULL;
	}
	h->capacity = capacity;
	return h;
}

void insert(int x, struct hash_table* h)
{
	struct link* l = h->table[hash(x, h)]->next;
	h->table[hash(x, h)]->next =
		(struct link*)malloc(sizeof(struct link));
	if (NULL == h->table[hash(x, h)]->next) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->table[hash(x, h)]->next->next = l;
	h->table[hash(x, h)]->next->element = x;
}

void my_delete(int x, struct hash_table* h)
{
	struct link* previous = h->table[hash(x, h)];
	struct link* p = previous->next;
	while (NULL != p && x != p->element) {
		previous = p;
		p = p->next;
	}
	if (NULL != p) {
		previous->next = p->next;
		free(p);
		p = NULL;
		my_delete(x, h);
	}
}

void my_print(struct hash_table* h)
{
	for (int i = 0; i < h->capacity; i++) {
		struct link* p = h->table[i]->next;
		while (NULL != p) {
			printf("%d ", p->element);
			p = p->next;
		}
	}
}