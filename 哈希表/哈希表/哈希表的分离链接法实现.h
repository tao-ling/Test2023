#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MinTableSize 5

struct HashTable* initializeTable(int taleSize);
struct ListNode* find(int key, struct HashTable* h);
void insert(int key, struct HashTable* h);
struct ListNode* myDelete(int key, struct HashTable* h);
void myPrint(struct HashTable* h);


struct HashTable
{
	int tableSize;
	struct ListNode** theLists;
};

struct ListNode
{
	int element;
	struct ListNode* next;
};