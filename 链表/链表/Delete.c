#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void Delete(struct Node* header, int x)
{
	struct Node* privious = header;
	struct Node* p = header->next;
	while (p != NULL) {
		if (p->element == x) {
			privious->next = p->next;
			free(p);
			return;
		}
		privious = p;
		p = p->next;
	}
	printf("未能找到你想删除的数");
	return;
}