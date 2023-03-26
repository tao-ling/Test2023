#pragma once
#include <stdio.h>
#include <stdlib.h>

struct tree* my_insert(int x, struct tree* t);
struct tree* my_delete(int x, struct tree* t);
struct tree* find(int x, struct tree* t);
void my_print(struct tree* t);
int find_min(struct tree* t);

struct tree {
	int element;
	struct tree* left;
	struct tree* right;
};