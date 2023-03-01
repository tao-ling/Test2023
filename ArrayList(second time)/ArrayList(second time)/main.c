#define _CRT_SECURE_NO_WARNINGS 1
#include "ArrayList.h"

int main()
{
	int index;
	int element;

	//创建一个空表
	struct List* list = create_list();

	printf("List is empty:%d\n", is_empty(list));
	printf("---------------------\n");

	//头插
	insert_first(list, 1);
	insert_first(list, 2);

	print_list(list);
	printf("\n---------------------\n");

	//尾插
	insert_last(list, 3);
	insert_last(list, 4);

	print_list(list);
	printf("\n---------------------\n");

	printf("List is empty:%d\n", is_empty(list));
	printf("---------------------\n");

	//查找值为3的元素，如果找了返回数组的角标，找不到返回-1
	index = find(list, 3);
	if (-1 == index) {
		printf("not find!\n");
	}
	else {
		printf("find element index:%d\n", index);
	}
	printf("---------------------\n");

	//查找第二个元素，返回元素的值
	element = find_kth(list, 2);
	printf("find element:%d\n", element);
	printf("---------------------\n");

	//删除值为3的元素
	my_delete(list, 3);
	print_list(list);
	printf("\n---------------------\n");

	//获取表的大小
	printf("list size is:%d\n", size(list));
	printf("---------------------\n");

	return 0;
	
}