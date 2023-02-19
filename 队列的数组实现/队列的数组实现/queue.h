#pragma once
/*
* 队列的数组实现
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Queue* createQueue(int maxElements);

bool isEmpty(struct Queue* q);
bool isFull(struct Queue* q);

void disposeQueue(struct Queue* q);		//释放队列内存空间

void makeEmpty(struct Queue* q);

void enqueue(int x, struct Queue* q);	//入队
void dequeue(struct Queue* q);			//出队

int succ(int index, struct Queue* q);	//循环数组的角标计算

int front(struct Queue* q);
int frontAndDequeue(struct Queue* q);

void printQueue(struct Queue* q);

struct Queue
{
	int capacity;		//队列的容量
	int size;			//队列的有效数据的大小

	int front;			//队列的角标
	int rear;			//队尾的角标

	int* array;			//指针，指向数组首元素的地址（即数组地址）
};