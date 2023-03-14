#define _CRT_SECURE_NO_WARNINGS 1
#include "queue_third.h"

struct queue* create_queue(int capacity)
{
	if (capacity < MIN_SIZE) {
		printf("the capacity is too small!\n");
		exit(EXIT_FAILURE);
	}
	struct queue* q = 
		(struct queue*)malloc(sizeof(struct queue));
	if (NULL == q) {
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->array =
		(int*)malloc(sizeof(int) * capacity);
	if (NULL == q->array) {
		free(q);
		q = NULL;
		printf("Out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->capacity = capacity;
	q->front = 1;
	q->rear = 0;
	q->size = 0;
	return q;
}

void enqueue(int x, struct queue* q)
{
	if (q->size == q->capacity) {
		printf("no space!\n");
		return;
	}
	q->rear = circulate(q->rear, q->capacity);
	q->size += 1;
	q->array[q->rear] = x;
}

void dequeue(struct queue* q)
{
	if (0 == q->size) {
		printf("this queue is empty!\n");
		return;
	}
	q->front = circulate(q->front, q->capacity);
	q->size -= 1;
}

void print_queue(struct queue* q)
{
	for (int i = q->front; i < q->front + q->size; i++) {
		printf("%d ", q->array[i % q->capacity]);
	}
}

int circulate(int x, int capacity)
{
	return (x + 1) % capacity;
}

void dispose_queue(struct queue* q)
{
	if (NULL != q->array) {
		free(q->array);
		q->array = NULL;
	}
	if (NULL != q) {
		free(q);
		q = NULL;
	}
}