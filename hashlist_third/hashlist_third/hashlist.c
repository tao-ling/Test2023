#define _CRT_SECURE_NO_WARNINGS 1
#include "hashlist.h"

static int hash(int x,struct hash_table* h);

struct hash_table* init(int table_size)
{
	if (table_size < MIN_SIZE) {
		printf("the table size is too small!\n");
		return NULL;
	}
	struct hash_table* h = malloc(sizeof(struct hash_table));
	if (NULL == h) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->table_size = table_size;
	h->list = malloc(sizeof(struct list*)*h->table_size);
	if (NULL == h->list) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < h->table_size; i++) {
		struct list* l = malloc(sizeof(struct list));
		if (NULL == l) {
			free(h);
			h = NULL;
			printf("Out of space!\n");
			exit(EXIT_FAILURE);
		}
		l->next = NULL;
		h->list[i] = l;
	}
	return h;
}

struct list* find(int key, struct hash_table* h)
{
	struct list* p = h->list[hash(key, h)]->next;
	while (NULL != p) {
		if (key == p->element) {
			return p;
		}
		p = p->next;
	}
	return NULL;
}

static int hash(int x, struct hash_table* h)
{
	return x % h->table_size;
}

void insert(int key, struct hash_table* h)
{
	struct list* p = malloc(sizeof(struct list));
	if (NULL == p) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	p->element = key;
	p->next = h->list[hash(key, h)]->next;
	h->list[hash(key, h)]->next = p;
}

struct list* my_delete(int key, struct hash_table* h)
{
	struct list* p = h->list[hash(key, h)]->next;
	struct list* previous = NULL;
	while (NULL != p && key != p->element) {	
		previous = p;
		p = p->next;
	}
	if (NULL == p) {
		return NULL;
	}
	previous->next = p->next;
	free(p);
	return p;
}

void my_print(struct hash_table* h)
{	
	struct list* p = NULL;
	for (int i = 0; i < h->table_size; i++) {
		p = h->list[i]->next;
		while (NULL != p) {
			printf("%d ", p->element);
			p = p->next;
		}
	}
}