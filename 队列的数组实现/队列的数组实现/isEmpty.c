#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

bool isEmpty(struct Queue* q)
{
	return 0 == q->size;
}