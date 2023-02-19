#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void makeEmpty(struct Queue* q)
{
	q->front = 1;
	q->rear = 0;
	q->size = 0;
}