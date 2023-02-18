#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

int Find(struct List* p, int x)
{
	for (int i = 0; i < p->length; i++) {
		if (x == p->element[i]) {
			return i;
		}
	}
	return -1;
}