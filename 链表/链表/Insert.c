#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void Insert(struct Node* header, int x, int position)
{
	struct Node* privious = header;
	struct Node* p = header->next;
	struct Node* insert = malloc(sizeof(struct Node));
	int count = 1;
	while (p != NULL) {
		if (count == position) {
			break;
		}
		else {
			privious = p;
			p = p->next;
			count++;
		}
	}
	if (NULL == p) {
		printf("你输入的位置过大，请输入一个合适的位置插入数据");
		return;
	}
	insert->element = x;
	insert->next = p;
	privious->next = insert;
}