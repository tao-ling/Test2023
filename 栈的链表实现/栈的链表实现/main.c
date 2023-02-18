#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

int main()
{
	int val;
	struct Stack* s;

	//创建一个栈
	s = CreateStack();

	//压栈
	Push(5, s);
	Push(2, s);

	//显示栈中的元素值
	DisposeStack(s);
	printf("-----------------\n");

	//查看栈顶元素值
	val = Top(s);
	printf("top val is:%d\n", val);
	printf("-----------------\n");

	//栈顶元素出栈
	Pop(s);
	val = Top(s);
	printf("top val is:%d\n", val);
	printf("-----------------\n");

	Push(6, s);
	Push(7, s);
	DisposeStack(s);
	printf("-----------------\n");

	//清空栈
	MakeEmpty(s);
	//DisposeStack(s);
	printf("stack IsEmpty:%d\n", IsEmpty(s));

	return 0;
}