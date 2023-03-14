#define _CRT_SECURE_NO_WARNINGS 1
#include "queue_third.h"

int main(void)
{
	struct queue* q;

	//创建队列
	q = create_queue(20);

	//入队
	enqueue(1, q);
	enqueue(2, q);
	enqueue(3, q);
	enqueue(5, q);
	enqueue(4, q);

	//打印队列
	print_queue(q);
	printf("\n");

	//出队
	dequeue(q);
	dequeue(q);
	print_queue(q);
	printf("\n");

	enqueue(9, q);
	print_queue(q);

	dispose_queue(q);

	return 0;
}