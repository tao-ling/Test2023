#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//从表头插入
void InsertFirst(struct Node* header, int x)
{
	struct Node* tmp = malloc(sizeof(struct Node));
	if (tmp == NULL) {
		printf("内存空间不足，插入失败");
		exit(1);
	}
	tmp->element = x;
	tmp->next = header->next;
	header->next = tmp;
}