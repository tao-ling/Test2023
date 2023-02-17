#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

struct Node* FindKth(struct Node* header, int position)
{
	int count = 1;
	struct Node* p = header->next;
	if (position <= 0) {
		printf("请输入一个大于等于1的位置");
	}
	while (p != NULL) {
		if (count == position) {
			return p;
		}
		p = p->next;
		count++;
	}
	return NULL;
}