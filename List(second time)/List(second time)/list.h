#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node* create_header_node();
void insert_first(struct Node* header, int x);
void insert_last(struct Node* header, int x);
void insert(struct Node* header, int position, int x);
struct Node* find(struct Node* header, int num);
struct Node* find_kth(struct Node* header, int position);
void my_delete(struct Node* header, int x);
bool is_empty(struct Node* header);
int size(struct Node* header);
void print_list(struct Node* header);

struct Node
{
	int element;
	struct List* next;
};