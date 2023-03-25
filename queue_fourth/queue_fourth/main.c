#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int main(void)
{
	struct queue* q = init(20);
	enqueue(2, q);
	enqueue(4, q);
	enqueue(6, q);
	enqueue(1, q);
	enqueue(6, q);
	enqueue(90, q);
	enqueue(345, q);
	enqueue(2, q);
	enqueue(2, q);
	enqueue(56, q);
	my_print(q);
	printf("\n");

	dequeue(q);
	dequeue(q);
	dequeue(q);
	my_print(q);

	return 0;
}