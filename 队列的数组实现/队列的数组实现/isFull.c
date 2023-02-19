#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

bool isFull(struct Queue* q)
{
	return q->size >= q->capacity;
}