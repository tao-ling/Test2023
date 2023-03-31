#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int main(void)
{
	struct queue* q = init(10);
	enqueue(2, q);
	enqueue(45, q);
	enqueue(67, q);
	enqueue(756, q);
	enqueue(2, q);
	my_print(q);
	printf("\n");

	dequeue(q);
	dequeue(q);
	dequeue(q);
	my_print(q);
	printf("\n");

	enqueue(2, q);
	enqueue(45, q);
	enqueue(67, q);
	enqueue(756, q);
	enqueue(2, q);
	my_print(q);

	return 0;
}
	