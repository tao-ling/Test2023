#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

void Delete(struct List* p, int x)
{
	for (int i = 0; i < p->length; i++) {
		if (p->element[i] == x) {
			for (int j = i; j < p->length - 1; j++) {
				p->element[i] = p->element[i + 1];
			}
			p->length--;
			return;
		}
	}
	printf("没有找到你想删除的元素");
}