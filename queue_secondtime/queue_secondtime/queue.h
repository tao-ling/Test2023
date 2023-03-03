#pragma once
/*
* 队列的数组实现
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue* create_queue(int max_elements);
bool is_empty(struct queue* q);
bool is_full(struct queue* q);
void dispose_queue(struct queue* q);
void make_empty(struct queue* q);
void enqueue(int x, struct queue* q);		//入队
void dequeue(struct queue* q);				//出队
int succ(int index, struct queue* q);		//循环数组角标
int front(struct queue* q);
int front_dequeue(struct queue* q);
void print_queue(struct queue* q);

struct queue
{
	int capacity;	//队列的容量
	int size;		//队列的有效数据大小

	int front;		//队头的角标
	int rear;		//队尾的角标

	int* array;		//指针，指向数组首元素的地址
};