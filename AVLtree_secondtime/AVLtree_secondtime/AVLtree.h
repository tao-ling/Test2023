#pragma once
#include <stdio.h>
#include <stdlib.h>

struct AVLtree* make_empty(struct AVLtree* t);
struct AVLtree* find(int x, struct AVLtree* t);
struct AVLtree* find_min(struct AVLtree* t);
struct AVLtree* find_max(struct AVLtree* t);
struct AVLtree* insert(int x, struct AVLtree* t);
struct AVLtree* my_delete(int x, struct AVLtree* t);
void print_AVL(struct AVLtree* t);

struct AVLtree
{
	int element;
	struct AVLtree* left;
	struct AVLtree* right;
	int height;
};