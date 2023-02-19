#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

struct Queue* createQueue(int maxElements)
{
	struct Queue* q = malloc(sizeof(struct Queue));
	if (NULL == q) {
		printf("内存空间不足，创建队列失败");
		return NULL;
	}
	q->array = malloc(sizeof(int) * maxElements);
	if (NULL == q->array) {
		printf("内存空间不足，创建队列失败");
		return NULL;
	}
	q->capacity = maxElements;
	makeEmpty(q);
	return q;
}