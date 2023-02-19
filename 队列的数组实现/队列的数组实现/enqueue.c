#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void enqueue(int x, struct Queue* q)
{
	if (isFull(q)) {
		printf("队列的空间不足\n");
		return;
	}
	++q->size;
	q->rear = succ(q->rear, q);
	q->array[q->rear] = x;
}