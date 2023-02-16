#pragma once
/*
* 1 实现一个表的数据结构，可以进行插入、查询、删除、判空、获取大小等操作
* 2 底层使用链表存储
*/

#include <stdio.h>
#include <stdlib.h>		//malloc
#include <stdbool.h>	//boll类型

//函数原型声明
struct Node* CreateHeaderNode();

void InsertFirst(struct Node* header, int x);
void InsertLast(struct Node* header, int x);

struct Node* Find(struct Node* header, int x);

struct Node* FindKth(struct Node* header, int position);

void Delete(struct Node* header, int x);

bool IsEmpty(struct Node* header);

int size(struct Node* header);

void PrintList(struct Node* header);

struct Node
{
	int element;		//节点中的值
	struct Node* next;	//执行下一个节点的指针
};