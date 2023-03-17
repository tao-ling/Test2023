#pragma once
#include <stdio.h>
#include <stdlib.h>

struct AVLtree* insert(int x, struct AVLtree* t);
void my_print(struct AVLtree* t);

struct AVLtree {
	int element;
	struct AVLtree* left;
	struct AVLtree* right;
	int height;
};