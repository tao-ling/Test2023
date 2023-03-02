#define _CRT_SECURE_NO_WARNINGS 1
#include "array_stack.h"

int main()
{
	int val;
	struct stack* s;

	//创建一个栈
	s = create_stack(10);

	//压栈
	push(s, 5);
	push(s, 2);
	//显示栈中的元素值
	print_stack(s);
	printf("\n-----------------\n");

	//显示栈顶元素值
	val = top(s);
	printf("top val is:%d\n", val);
	printf("-----------------\n");

	//出栈
	pop(s);
	val = top(s);
	printf("top val is:%d\n", val);
	printf("-----------------\n");

	push(s, 6);
	push(s, 7);
	print_stack(s);
	printf("\n-----------------\n");

	//清空堆栈
	make_empty(s);
	printf("stack is empty:%d\n", is_empty(s));

	//如果堆栈不再使用，释放内存
	dispose_satck(s);

	return 0;
}