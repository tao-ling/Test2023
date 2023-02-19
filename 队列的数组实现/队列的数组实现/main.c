#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

int main()
{
	int val;
	struct Queue* q;

	//创建队列
	q = createQueue(5);

	//入队
	enqueue(1, q);
	enqueue(2, q);
	enqueue(3, q);
	enqueue(4, q);
	enqueue(5, q);
	
	//打印队列
	printQueue(q);
	printf("\n-------------------\n");

	//出队
	dequeue(q);
	dequeue(q);
	printQueue(q);
	printf("\n-------------------\n");

	enqueue(9, q);
	printQueue(q);
	printf("\n-------------------\n");

	//获取表头的元素
	val = front(q);
	printf("val:%d", val);
	printf("\n-------------------\n");

	return 0;
}