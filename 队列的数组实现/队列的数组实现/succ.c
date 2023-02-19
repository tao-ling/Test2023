#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int succ(int index, struct Queue* q)
{
	++index;
	return index % q->capacity;
}