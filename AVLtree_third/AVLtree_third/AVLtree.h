#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MAX(v1, v2) ((v1)>(v2)?(v1):(v2))

struct AVLtree* insert(int x, struct AVLtree* t);
struct AVLtree* find(int x, struct AVLtree* t);
struct AVLtree* find_max(struct AVLtree* t);
struct AVLtree* find_min(struct AVLtree* t);
void print_AVL(struct AVLtree* t);

struct AVLtree {
	int element;
	int height;
	struct AVLtree* left;
	struct AVLtree* right;
};