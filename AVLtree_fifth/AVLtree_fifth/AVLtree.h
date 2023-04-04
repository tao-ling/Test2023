#pragma once
#include <stdio.h>
#include <stdlib.h>

struct tree* insert(int x, struct tree* t);
void my_print(struct tree* t);

struct tree {
	int x;
	int height;
	struct tree* left;
	struct tree* right;
};