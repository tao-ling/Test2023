#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

static int succ(int x, struct queue* q);

struct queue* init(int capacity)
{
	if (capacity < MIN_CAPACITY) {
		printf("the capacity is too small!\n");
		return NULL;
	}
	struct queue* q = malloc(sizeof(struct queue));
	if (NULL == q) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->element = malloc(sizeof(int) * capacity);
	if (NULL == q->element) {
		printf("out of space!\n");
		exit(EXIT_FAILURE);
	}
	q->capacity = capacity;
	q->head = 1;
	q->tail = 0;
	q->size = 0;
}

void enqueue(int x, struct queue* q)
{
	if (q->size == q->capacity) {
		printf("the queue is full!\n");
		return;
	}
	q->tail = succ(q->tail + 1, q);
	q->element[q->tail] = x;
	q->size++;
}

int dequeue(struct queue* q)
{
	if (0 == q->capacity) {
		printf("the queue is empty!\n");
		return -999;
	}
	int temp = q->head;
	q->head = succ(q->head + 1, q);
	q->size--;
	return temp;
}

static int succ(int x, struct queue* q)
{
	return x % q->capacity;
}

void my_print(struct queue* q)
{
	for (int i = 0; i < q->size; i++) {
		printf("%d ", q->element[succ(q->head + i, q)]);
	}
}