#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

struct List* create_list()
{
	struct List* p = malloc(sizeof(struct List));
	if (NULL == p) {
		printf("Not empty memory!\n");
		exit(1);
	}
	p->length = 0;
	return p;
}

void insert_first(struct List* p, int x)
{
	if (p->length == MAX_SIZE) {
		printf("not empty air!\n");
		return;
	}
	p->length += 1;
	for (int i = p->length; i > 1; i--) {
		p->element[i] = p->element[i - 1];
	}
	p->element[1] = x;
}

void insert_last(struct List* p, int x)
{
	if (MAX_SIZE == p->length) {
		printf("Not enough air!\n");
		return;
	}
	p->length++;
	p->element[p->length] = x;
}

int find(struct List* p, int x)
{
	for (int i = 1; i <= p->length; i++) {
		if (x == p->element[i]) {
			return i;
		}
	}
	return -1;
}

int find_kth(struct List* p, int position)
{
	if (position > p->length || position < 0) {
		printf("Too big or too small of position!\n");
		return 0;
	}
	return p->element[position];
}

void my_delete(struct List* p, int x)
{
	for (int i = 0; i <= p->length; i++) {
		if (x == p->element[i]) {
			while (i <= p->length - 1) {
				p->element[i] = p->element[i + 1];
				i++;
			}
			p->length--;
			return;
		}
	}
	printf("Not find!\n");
}

bool is_empty(struct List* p)
{
	return 0 == p->length;
}

int size(struct List* p)
{
	return p->length;
}

void print_list(struct List* p)
{
	for (int i = 1; i <= p->length; i++) {
		printf("%d ", p->element[i]);
	}
}