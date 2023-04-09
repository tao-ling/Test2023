#define _CRT_SECURE_NO_WARNINGS 1
#include "hash.h"

#define MIN_CAPACITY 5

static int hash(int x, struct hash_list* h);

struct hash_list* init(int capacity)
{
	if (capacity < MIN_CAPACITY) {
		printf("the capacity is too small!\n");
		return NULL;
	}
	struct hash_list* h = 
		(struct hash_list*)malloc(sizeof(struct hash_list));
	if (NULL == h) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	h->list =
		(struct list**)malloc(sizeof(struct list*) * capacity);
	if (NULL == h->list) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < capacity; i++) {
		h->list[i] =
			(struct list*)malloc(sizeof(struct list));
		if (NULL == h->list[i]) {
			printf("out of space!\n");
			exit(EXIT_FAILURE);
		}
		h->list[i]->next = NULL;
	}
	h->capacity = capacity;
	return h;
}

void insert(int x, struct hash_list* h)
{
	struct list* p =
		(struct list*)malloc(sizeof(struct list));
	if (NULL == p) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	p->element = x;
	int temp = hash(x, h);
	p->next = h->list[temp]->next;
	h->list[temp]->next = p;
}

int hash(int x, struct hash_list* h) {
	return x % h->capacity;
}

void my_delete(int x, struct hash_list* h)
{
	struct list* previous = h->list[hash(x, h)];
	struct list* p = previous->next;
	while (NULL != p && x != p->element) {
		previous = p;
		p = p->next;
	}
	if (NULL != p) {
		previous->next = p->next;
		free(p);
		p = NULL;
		if (NULL != previous->next) {
			my_delete(x, h);
		}
	}
}

void my_print(struct hash_list* h)
{
	for (int i = 0; i < h->capacity; i++) {
		struct list* temp = h->list[i]->next;
		while (NULL != temp) {
			printf("%d ", temp->element);
			temp = temp->next;
		}
	}
}