#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void MakeEmpty(struct Stack* s)
{
	if (NULL == s) {
		printf("Must use CreateStack first.\n");
		return;
	}
	else {
		while (!IsEmpty(s)) {
			Pop(s);
		}
	}
}