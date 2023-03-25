#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

struct queue* init(int elements)
{
	if (elements < MIN_SIZE) {
		printf("the size is too small!\n");
		return NULL;
	}
	struct queue* q = malloc(sizeof(struct queue));
	if (NULL == q) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->element = malloc(sizeof(int) * elements);
	if (NULL == q->element) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->capacity = elements;
	q->head = 1;
	q->tail = 0;
	q->size = 0;
	return q;
}

int circulate(int x, struct queue* q)
{
	return x % q->capacity;
}

void enqueue(int x, struct queue* q)
{
	if (q->capacity == q->size) {
		printf("the queue is full!\n");
		return;
	}
	q->tail = circulate(q->tail+1, q);
	q->element[q->tail] = x;
	q->size += 1;
}

int dequeue(struct queue* q)
{
	if (0 == q->size) {
		printf("the queue is empty!\n");
		return;
	}
	int temp = q->element[q->head];
	q->head = circulate(q->head+1, q);
	q->size -= 1;
	return temp;
}

void my_print(struct queue* q)
{
	if (0 == q->size) {
		printf("the queue is empty!\n");
		return;
	}
	for (int i = 0; i < q->size; i++) {
		printf("%d ", 
			q->element[circulate(q->head + i, q)]);
	}
}