#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack2.h"

int main()
{
	int val;
	struct Stack* s;

	//创建一个栈
	s = createStack(10);

	//压栈
	push(5, s);
	push(2, s);
	//显示栈中的元素值
	printStack(s);
	printf("\n-------------------------\n");

	//查看栈顶元素值
	val = top(s);
	printf("top val is:%d\n", val);
	printf("-------------------------\n");

	//栈顶元素出栈
	pop(s);
	val = top(s);
	printf("top val is：%d\n", val);
	printf("-------------------------\n");

	push(6, s);
	push(7, s);
	printStack(s);
	printf("\n-------------------------\n");

	//清空栈
	makeEmpty(s);
	printf("Stack isEmpty:%d\n", isEmpty(s));

	//如果栈不再使用，则释放栈内存
	disposeStack(s);

	return 0;
}