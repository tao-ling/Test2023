#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

struct queue* create_queue(int max_elements)
{
	struct queue* q = malloc(sizeof(struct queue));
	if (NULL == q) {
		printf("not enough memory!\n");
		exit(1);
	}
	q->array = malloc(sizeof(int) * max_elements);
	if (NULL == q->array) {
		printf("not enough memory!\n");
		exit(1);
	}
	q->capacity = max_elements;
	make_empty(q);
	return q;
}

void make_empty(struct queue* q)
{
	q->front = 1;
	q->rear = 0;
	q->size = 0;
}

bool is_empty(struct queue* q)
{
	return 0 == q->size;
}

bool is_full(struct queue* q)
{
	return q->size == q->capacity;
}

void dispose_queue(struct queue* q)
{
	if (NULL != q->array) {
		free(q->array);
	}
	if (NULL != q) {
		free(q);
	}
}

void enqueue(int x, struct queue* q)
{
	if (is_full(q)) {
		printf("not enough air!\n");
		return;
	}
	++q->size;
	q->rear = succ(q->rear, q);
	q->array[q->rear] = x;
}

void dequeue(struct queue* q)
{
	if (is_empty(q)) {
		printf("not enough air!\n");
		return;
	}
	--q->size;
	q->front = succ(q->front, q);
}

int succ(int index, struct queue* q)
{
	++index;
	return index % q->capacity;
}

int front(struct queue* q)
{
	if (is_empty(q)) {
		printf("not enough air!\n");
		return;
	}
	return q->array[q->front];
}

int front_dequeue(struct queue* q)
{
	int element = 0;
	if (is_empty(q)) {
		printf("not enough air!\n");
		return;
	}
	element = q->array[q->front];
	--q->size;
	q->front = succ(q->front, q);
	return element;
}

void print_queue(struct queue* q)
{
	int front = q->front;
	int rear = q->rear;
	int size = q->size;
	int capacity = q->capacity;

	for (int i = front; i < front + size; i++) {
		printf("%d ", q->array[i % capacity]);
	}
}