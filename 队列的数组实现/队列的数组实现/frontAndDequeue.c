#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int frontAndDequeue(struct Queue* q)
{
	int element;
	if (isEmpty(q)) {
		printf("empty queue\n");
		return 0;
	}
	element = q->array[q->front];
	--q->size;
	q->front = succ(q->front, q);
	return element;
}