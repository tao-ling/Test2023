#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void PrintList(struct Node* header)
{
	struct Node* p;
	p = header->next;
	printf("该链表各节点的值为：");
	while (p != NULL) {
		printf("%d ", p->element);
		p = p->next;
	}
	printf("\n");
}