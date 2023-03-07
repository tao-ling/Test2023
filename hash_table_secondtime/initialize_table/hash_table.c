#define _CRT_SECURE_NO_WARNINGS 1
#include "hash_table.h"

static int hash(const key, int table_size);

struct hash_table* initialize_table(int table_size)
{
	if (table_size < MINSIZE) {
		printf("table size is too small!\n");
		return NULL;
	}
	struct hash_table* h = malloc(sizeof(struct hash_table));
	if (NULL == h) {
		printf("out of space!\n");
		return NULL;
	}
	h->table_size = table_size;
	h->list = malloc(sizeof(struct list*) * h->table_size);
	if (NULL == h->list) {
		printf("out of space!\n");
		return NULL;
	}
	for (int i = 0; i < h->table_size; i++) {
		h->list[i] = malloc(sizeof(struct list));
		if (NULL == h->list[i]) {
			printf("out of space!\n");
			return NULL;
		}
		else {
			h->list[i]->next = NULL;
		}
	}
	return h;
}

int hash(const key, int table_size)
{
	return key % table_size;
}

struct list* find(int key, struct hash_table* h)
{
	struct list* p = h->list[hash(key, h->table_size)]->next;
	while (NULL != p && key != p->element) {
		p = p->next;
	}
	return p;
}

void insert(int key, struct hash_table* h)
{
	struct list* pos = find(key, h);
	if (NULL == pos) {
		struct list* p = malloc(sizeof(struct list));
		if (NULL == p) {
			printf("out of space!\n");
			return;
		}
		struct list* temp = h->list[hash(key, h->table_size)]->next;
		h->list[hash(key, h->table_size)]->next = p;
		p->element = key;
		p->next = temp;
	}
}

struct list* my_delete(int key, struct hash_table* h)
{
	struct list* previous = h->list[hash(key, h->table_size)];
	struct list* p = previous->next;
	while (NULL != p && key != p->element) {
		previous = p;
		p = p->next;
	}
	if (NULL == p) {
		printf("not find the number you want to delete!\n");
		return NULL;
	}
	previous->next = p->next;
	return p;
}

void my_print(struct hash_table* h)
{
	for (int i = 0; i < h->table_size; i++) {
		struct list* p = h->list[i]->next;
		while (NULL != p) {
			printf("%d ", p->element);
			p = p->next;
		}
	}
}