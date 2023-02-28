#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

struct Node* create_header_node()
{
	struct Node* header = malloc(sizeof(struct Node));
	if (NULL == header) {
		printf("Not enough memory!\n");
		exit(1);
	}
	header->next = NULL;
	return header;
}

void insert_first(struct Node* header, int x)
{
	struct Node* l = malloc(sizeof(struct Node));
	if (NULL == l) {
		printf("Not enough memory!\n");
		return;
	}
	l->element = x;
	l->next = header->next;
	header->next = l;
}

void insert_last(struct Node* header, int x)
{
	struct Node* p = malloc(sizeof(struct Node));
	if (NULL == p) {
		printf("Not enough memory!\n");
		return;
	}
	struct Node* temp = header;
	while (NULL != temp->next) {
		temp = temp->next;
	}
	p->element = x;
	p->next = NULL;
	temp->next = p;
	
}

void insert(struct Node* header, int position, int x)
{
	struct Node* p = malloc(sizeof(struct Node));
	if (NULL == p) {
		printf("Not enough memory!\n");
		return;
	}
	struct Node* temp = header;
	for (int i = 1; i < position; i++) {
		if (NULL == temp->next) {
			printf("输入的位置过大，超出范围！\n");
			return;
		}
		temp = temp->next;
	}
	p->element = x;
	p->next = temp->next;
	temp->next = p;
}

struct Node* find(struct Node* header, int num)
{
	struct Node* p = header->next;
	while (NULL != p) {
		if (num == p->element) {
			return p;
		}
		p = p->next;
	}
	return p;
}

struct Node* find_kth(struct Node* header, int position)
{
	if (position <= 0) {
		printf("请输入一个大于等于1的位置！\n");
		return NULL;
	}
	struct Node* p = header->next;
	for (int i = 1; i < position; i++) {
		if (NULL == p) {
			return NULL;
		}
		p = p->next;
	}
	return p;
}

void my_delete(struct Node* header, int x)
{
	struct Node* p = header->next;
	struct Node* privious = header;
	while (NULL != p) {
		if (x == p->element) {
			privious->next = p->next;
			free(p);
			return;
		}
		privious = p;
		p = p->next;
	}
	printf("没有找到你想删除的数！\n");
}

bool is_empty(struct Node* header)
{
	return NULL == header->next;
}

int size(struct Node* header)
{
	struct Node* p = header->next;
	int i = 0;
	while (NULL != p) {
		p = p->next;
		i++;
	}
	return i;
}

void print_list(struct Node* header)
{
	struct Node* p = header->next;
	while (NULL != p) {
		printf("%d ", p->element);
		p = p->next;
	}
	printf("\n");
}