#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//判断链表是否为空
bool IsEmpty(struct Node* header)
{
	return header->next == NULL;
}