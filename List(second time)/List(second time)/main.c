#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

int main()
{
	struct Node* node;
	struct Node* header;

	//创建表头
	header = create_header_node();

	//判断表是否为空
	printf("list is empty:%d", is_empty(header));
	printf("\n--------------\n");

	//从表头插入
	insert_first(header, 1);
	insert_first(header, 2);
	insert_first(header, 3);
	insert_first(header, 4);

	print_list(header);
	printf("--------------\n");

	//尾插
	insert_last(header, 5);
	insert_last(header, 6);

	print_list(header);
	printf("--------------\n");

	printf("list is empty:%d", is_empty(header));
	printf("\n--------------\n");

	//查找节点值为3的节点
	node = find(header, 3);
	if (NULL == node) {
		printf("not find\n");
	}
	else {
		printf("find node element:%d\n", node->element);
	}
	printf("--------------\n");

	//查找第四个节点的值
	node = find_kth(header, 4);
	if (NULL == node) {
		printf("not find\n");
	}
	else {
		printf("find node element:%d\n", node->element);
	}
	printf("--------------\n");

	//删除节点值为3的节点
	my_delete(header,3);
	print_list(header);
	printf("--------------\n");

	//打印表中节点个数
	printf("List size:%d\n", size(header));
	printf("--------------\n");

	//在2处插入5
	insert(header, 2, 5);
	print_list(header);

	return 0;
}