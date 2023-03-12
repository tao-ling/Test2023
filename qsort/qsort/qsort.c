#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define SIZE (9)
#define CUTOFF (3)

void quick_sort(int* arr, int n);
void my_qsort(int* arr, int left, int right);
int median3(int* arr, int left, int right);
void swap(int* val1, int* val2);
void insert_sort(int* arr, int n);
void print_arr(int* arr, int n);

int main(void)
{
	int arr[SIZE] = { 1,3,6,4,7,8,2,9,5 };
	quick_sort(arr, SIZE);
	print_arr(arr, SIZE);
}

void quick_sort(int* arr, int n)
{
	my_qsort(arr, 0, n - 1);
}

void my_qsort(int* arr, int left, int right)
{
	int i, j;
	int pivot;

	if (left + CUTOFF <= right) {
		pivot = median3(arr, left, right);
		i = left;
		j = right - 1;
		for (;;) {
			while (arr[++i] < pivot) {}
			while (arr[--j] > pivot) {}
			if (i < j) {
				swap(&arr[i], &arr[j]);
			}
			else {
				break;
			}
		}
		swap(&arr[i], &arr[right - 1]);
		my_qsort(arr, left, i - 1);
		my_qsort(arr, i + 1, right);
	}
	else {		//小数组，如果数组的元素小于等于4，将采用插入排序
		insert_sort(arr + left, right - left + 1);
	}
}

int median3(int* arr, int left, int right)
{
	int center = (left + right) / 2;
	if (arr[left] > arr[center]) {
		swap(&arr[left], &arr[center]);
	}
	if (arr[left] > arr[right]) {
		swap(&arr[left], &arr[right]);
	}
	if (arr[center] > arr[right]) {
		swap(&arr[center], &arr[right]);
	}
	swap(&arr[center], &arr[right - 1]);
	return arr[right - 1];
}

void swap(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void insert_sort(int* arr, int n)
{
	int temp;
	for (int i = 1; i < n; i++) {
		temp = *(arr + i);
		int j;
		for (j = i; j > 0 && temp < arr[j-1]; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

void print_arr(int* arr, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}