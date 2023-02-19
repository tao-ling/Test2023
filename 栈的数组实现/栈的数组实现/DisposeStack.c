#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

void disposeStack(struct Stack* s)
{
	if (s != NULL) {
		free(s->array);
		free(s);
		s->array = NULL;
		s = NULL;
	}
}