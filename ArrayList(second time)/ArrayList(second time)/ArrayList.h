#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 20

struct List* create_list();
void insert_first(struct List* p, int x);
void insert_last(struct List* p, int x);
int find(struct List* p, int x);
int find_kth(struct List* p, int position);
void my_delete(struct List* p, int x);
bool is_empty(struct List* p);
int size(struct List* p);
void print_list(struct List* p);

struct List
{
	int element[MAX_SIZE+1];
	int length;
};