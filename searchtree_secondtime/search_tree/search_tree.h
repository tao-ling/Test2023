#pragma once
/*
	二叉查找树的ADT实现
*/
#include <stdio.h>
#include <stdlib.h>

struct tree* make_empty(struct tree* t);
struct tree* find(int x, struct tree* t);
struct tree* find_min(struct tree* t);
struct tree* find_max(struct tree* t);
struct tree* insert(int x, struct tree* t);
struct tree* my_delete(int x, struct tree* t);
void print_tree(struct tree* t);

struct tree
{
	int element;
	struct tree* left;
	struct tree* right;
};