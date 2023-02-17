#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void InsertLast(struct Node* header, int x)
{
	struct Node* tmp;
	struct Node* p = malloc(sizeof(struct Node));
	if (p == NULL) {
		printf("内存空间不足，尾插失败");
		exit(1);
	}
	p->element = x;
	p->next = NULL;
	tmp = header;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = p;
}