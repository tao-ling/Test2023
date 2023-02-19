#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void printQueue(struct Queue* q)
{
	int front = q->front;
	int rear = q->rear;
	int size = q->size;
	int capacity = q->capacity;
	
	for (int i = front; i < front + size; i++) {
		printf("%d ", q->array[i % capacity]);
	}
}