#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int main()
{
	struct Node* node;
	struct Node* header;

	//创建表头（哑节点）
	header = CreateHeaderNode();

	//判断表是否为空
	printf("List isEmpty:%d\n", IsEmpty(header));
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

	printf("List isEmpty:%d\n", IsEmpty(header));
	printf("--------------------------\n");

	//查找节点值为3的节点
	node = Find(header, 3);
	if (node == NULL) {
		printf("not find...\n");
	}
	else {
		printf("find node element:%d\n", node->element);
	}
	printf("--------------------------\n");

	//查找第4个节点的值
	node = FindKth(header, 1);
	if (node == NULL) {
		printf("not find...\n");
	}
	else {
		printf("find node position:%d\n", node->element);
	}
	printf("--------------------------\n");

	//删除值为3的节点
	Delete(header, 3);
	PrintList(header);
	printf("--------------------------\n");

	//打印表中节点个数，即表示表的大小
	printf("List szie:%d\n", Size(header));
	printf("--------------------------\n");

	//在位置为2处插入5
	Insert(header, 5, 3);
	PrintList(header);

	return 0;
}