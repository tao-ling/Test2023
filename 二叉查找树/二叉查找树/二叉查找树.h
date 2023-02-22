#pragma once
/*
* 二叉查找树ADT代码实现
*/

#include <stdio.h>
#include <stdlib.h>

struct Tree* makeEmpty(struct Tree* t);

struct Tree* find(int x, struct Tree* t);
struct Tree* findMin(struct Tree* t);
struct Tree* findMax(struct Tree* t);

struct Tree* insert(int x, struct Tree* t);
struct Tree* myDelete(int x, struct Tree* t);

void printTree(struct Tree* t);

struct Tree
{
	int element;
	struct Tree* left;
	struct Tree* right;
};