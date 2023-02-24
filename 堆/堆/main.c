#define _CRT_SECURE_NO_WARNINGS 1
#include "堆.h"

int main()
{
	struct Heap* h;
	
	//初始化堆
	h = init(20);
	

	//插入元素
	insert(13, h);
	insert(4, h);
	insert(33, h);
	insert(2, h);
	insert(29, h);
	insert(11, h);
	
	printHeap(h);

	//删除最小值
	deleteMin(h);
	printHeap(h);

	return 0;
}