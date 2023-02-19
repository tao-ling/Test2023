#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int front(struct Queue* q)
{
	if (isEmpty(q)) {
		printf("empty queue\n");
		return 0;
	}
	return q->array[q->front];
}