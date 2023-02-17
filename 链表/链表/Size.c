#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int Size(struct Node* header)
{
	int count = 0;
	struct Node* p = header->next;
	while (p != NULL) {
		count++;
		p = p->next;
	}
	return count;
}