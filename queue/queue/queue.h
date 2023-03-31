#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MIN_CAPACITY 5	

struct queue* init(int capacity);
void enqueue(int x, struct queue* q);
int dequeue(struct queue* q);
void my_print(struct queue* q);

struct queue {
	int capacity;
	int size;
	int head;
	int tail;
	int* element;
};