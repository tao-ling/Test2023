#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MIN_SIZE 5

struct queue* init(int elements);
void enqueue(int x, struct queue* q);
int dequeue(struct queue* q);
int circulate(int x, struct queue* q);
void my_print(struct queue* q);

struct queue {
	int* element;
	int head;
	int tail;
	int capacity;
	int size;
};