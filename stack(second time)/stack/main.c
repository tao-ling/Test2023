#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

int main()
{
	int val;
	struct Stack* s;

	//创建一个栈
	s = create_stack();

	//压栈
	push(s, 2);
	push(s, 5);

	//显示栈中的元素
	dispose_stack(s);
	printf("\n--------------------\n");

	//查看栈顶元素
	val = top(s);
	printf("top val is:%d\n", val);
	printf("--------------------\n");

	//栈顶元素出栈
	pop(s);
	val = top(s);
	printf("top val is:%d\n", val);
	printf("--------------------\n");

	push(s, 6);
	push(s, 7);
	dispose_stack(s);
	printf("\n--------------------\n");

	//清空栈
	make_empty(s);
	printf("stack is empty:%d", is_empty(s));

	return 0;
}