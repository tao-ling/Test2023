#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 9
#define left_child(i) (2*(i) + 1)

void prec_down(int* arr, int i, int n);
void heap_sort(int* arr, int n);
void print_array(int* arr, int n);
void swap(int* i, int* j);

int main(void) {
	int arr[SIZE] = { 1, 3, 6, 4, 7, 8, 2, 9, 5 };

	//使用堆排序
	heap_sort(arr, SIZE);

	//打印数组
	print_array(arr, SIZE);
}

void heap_sort(int* arr, int n)
{
	//将一个普通的数组转换为一个堆
	for (int i = n / 2 - 1; i >= 0; i--) {
		prec_down(arr, i, n);
	}
	for (int i = n - 1; i > 0; i--) {
		swap(&arr[0], &arr[i]);
		prec_down(arr, 0, i);
	}
}

void prec_down(int* arr, int i, int n)
{
	int child;
	int temp;
	for (temp = arr[i]; left_child(i) < n; i = child) {
		child = left_child(i);
		if (child != n - 1 && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (temp < arr[child]) {
			arr[i] = arr[child];
		}
		else {
			break;
		}
	}
	arr[i] = temp;
}

void swap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}