#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct AvlNode* makeEmpty(struct AvlNode* t);
struct AvlNode* find(int x, struct AvlNode* t);
struct AvlNode* findMin(struct AvlNode* t);
struct AvlNode* findMax(struct AvlNode* t);
struct AvlNode* insert(int x, struct AvlTree* t);
struct AvlNode* myDelete(int x, struct AvlTree* t);
int retrieve(struct AvlNode* t);

struct AvlNode
{
	int element;
	struct AvlNode* left;
	struct AvlNode* right;
	int height;
};