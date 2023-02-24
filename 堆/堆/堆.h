#pragma once
/*
* 堆的基本操作--使用二叉堆画图描述，底层使用数组实现
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_HEAP_SIZE 5
#define MIN_DATA -999

struct Heap* init(int maxElements);

void insert(int x, struct Heap* h);
int deleteMin(struct Heap* h);
void printHeap(struct Heap* h);

bool isEmpty(struct Heap* h);
bool isFull(struct Heap* h);

struct Heap
{
	int capacity;
	int size;
	int* elements;
};