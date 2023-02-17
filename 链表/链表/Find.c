#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

struct Node* Find(struct Node* header, int x)
{
	struct Node* tmp;
	tmp = header->next;
	while (tmp != NULL && tmp->element != x) {
		tmp = tmp->next;
	}
	return tmp;
}