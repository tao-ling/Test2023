#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

int main()
{
	int index;
	int element;

	//创建一个空表
	struct List* list = CreateList();

	printf("List isEmpty:%d\n", IsEmpty(list));
	printf("--------------------------\n");

	//头插
	InsertFirst(list, 1);
	InsertFirst(list, 2);

	PrintList(list);
	printf("--------------------------\n");

	//尾插
	InsertLast(list, 3);
	InsertLast(list, 4);
	
	PrintList(list);
	printf("--------------------------\n");

	printf("List isEmpty:%d\n", IsEmpty(list));
	printf("--------------------------\n");

	//查找值为3的元素，如果找到了返回数组角标，找不到返回-1
	index = Find(list, 3);
	if (index == -1) {
		printf("not find...\n");
	}
	else {
		printf("find element index: %d\n", index);
	}

	//查找第2个元素，返回元素的值
	element = FindKth(list, 2);
	printf("find element:%d\n", element);
	printf("--------------------------\n");

	//删除值为3的元素
	Delete(list, 3);
	PrintList(list);
	printf("--------------------------\n");

	//获取表的大小
	printf("List szie is:%d\n", Size(list));
	printf("--------------------------\n");

	return 0;
}