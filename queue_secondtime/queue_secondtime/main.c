#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int main()
{
	int val = 0;
	struct queue* q = NULL;
	//创建队列
	q = create_queue(5);

	//入队
	enqueue(1, q);
	enqueue(2, q);
	enqueue(3, q);
	enqueue(4, q);
	enqueue(5, q);

	//打印队列
	print_queue(q);
	printf("\n----------------\n");

	//出队
	dequeue(q);
	dequeue(q);
	print_queue(q);
	printf("\n----------------\n");

	enqueue(9, q);
	print_queue(q);
	printf("\n----------------\n");

	//获取表头的元素
	val = front(q);
	printf("val:%d", val);
	printf("\n----------------\n");

	return 0;
}