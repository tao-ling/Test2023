#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_SIZE 5

struct queue* create_queue(int capacity);
void enqueue(int x, struct queue* q);
void dequeue(struct queue* q);
void print_queue(struct queue* q);
int circulate(int x, int capacity);
void dispose_queue(struct queue* q);

struct queue {
	int capacity;
	int size;
	int front;		//队头的角标
	int rear;		//队尾的角标
	int* array;
};