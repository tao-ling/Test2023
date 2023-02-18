#pragma once
/*
* 1 实现一个表的数据结构，可以进行插入、查询、删除、判空、获取大小等操作
* 2 底层使用数组存储
*/

#include <stdio.h>
#include <stdlib.h>		//malloc
#include <stdbool.h>	//bool类型

#define MAX_SIZE 100


//函数原型声明
struct List* CreateList();

void InsertFirst(struct List* p, int x);
void InsertLast(struct List* p, int x);

void Insert(struct List* p, int x, int position);

int Find(struct List* p, int x);

int FindKth(struct List* p, int position);

void Delete(struct List* p, int x);

bool IsEmpty(struct List* p);

int Size(struct List* p);

void PrintList(struct List* p);

struct List
{
	int element[MAX_SIZE];	//表的元素都存放在数组中
	int length;				//表中元素的长度（即个数），实际上是存储的有效个数
};