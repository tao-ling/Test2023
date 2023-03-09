#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

int main()
{
	struct heap* h;

	//初始化堆
	h = init(20);

	//插入元素
	insert(13, h);
	insert(4, h);
	insert(33, h);
	insert(234, h);
	insert(22, h);
	insert(28, h);
	print_heap(h);
	printf("\n");
	//删除最小值
	delete_min(h);
	print_heap(h);

	return 0;
}