#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void dequeue(struct Queue* q)
{
	if (isEmpty(q)) {
		printf("队列为空，无法出栈");
		return;
	}
	--q->size;
	q->front = succ(q->front, q);
}