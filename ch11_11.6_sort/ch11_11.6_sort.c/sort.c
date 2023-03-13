#define _CRT_SECURE_NO_WARNINGS 1
/*
	对一个事先不知道大小的数组进行排序
*/
#include <stdio.h>
#include <stdlib.h>

int compare_integers(void const* a, void const* b);

int main(void)
{
	int* array;
	int n_values;
	int i;
	/*
		观察共有多少值
	*/
	printf("How many values are there?");
	if (scanf("%d", &n_values) != 1 || n_values <= 0) {
		printf("Illegal number of values.\n");
		exit(EXIT_FAILURE);
	}
	/*
		分配内存，用于存储这些值
	*/
	array = (int*)malloc(n_values * sizeof(int));
	if (NULL == array) {
		printf("Can't get memory for that many values.\n");
		exit(EXIT_FAILURE);
	}
	/*
		读取这些值
	*/
	for (i = 0; i < n_values; i += 1) {
		printf("?");
		if (scanf("%d", array + i) != 1) {
			printf("Error reading value #%d\n", i);
			free(array);
			exit(EXIT_FAILURE);
		}
	}
	/*
		对这些值排序
	*/
	qsort(array, n_values, sizeof(int), compare_integers);
	/*
		打印这些值
	*/
	for (i = 0; i < n_values; i += 1) {
		printf("%d\n", array[i]);
	}
	/*
		释放内存并退出
	*/
	free(array);
	return EXIT_SUCCESS;
}

int compare_integers(void const* a, void const* b)
{
	register int const* pa = a;
	register int const* pb = b;
	return *pa > *pb ? 1 : *pa < *pb ? -1 : 0;
}