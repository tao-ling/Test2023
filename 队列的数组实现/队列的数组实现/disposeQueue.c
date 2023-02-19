#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void disposeQueue(struct Queue* q)
{
	if (q->array != NULL) {
		free(q->array);
	}
	if (q != NULL) {
		free(q);
	}
}