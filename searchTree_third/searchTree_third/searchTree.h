#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct search_tree* insert(int x, struct search_tree* s);
struct search_tree* my_delete(int x, struct search_tree* s);
int find_max(struct search_tree* s);
void print_tree(struct search_tree* s);

struct search_tree {
	int element;
	struct search_tree* left;
	struct search_tree* right;
};