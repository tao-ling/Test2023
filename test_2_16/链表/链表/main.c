#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int main()
{
	struct Node* node;
	struct Node* header;

	//创建表头（哑节点）
	header = CreateHeaderNode();

	//判断表是否为空
	printf("创建表头是否成功:%d\n", IsEmpty(header));
	printf("--------------------------\n");

	//从表头插入
	InsertFirst(header, 1);
	InsertFirst(header, 2);

	PrintList(header);
	printf("--------------------------\n");

	//从尾部插入
	InsertLast(header, 3);
	InsertLast(header, 4);

	PrintList(header);
	printf("--------------------------\n");

	return 0;
}