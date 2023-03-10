#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 9

void insert_sort(int arr[], int n);
void print_array(int arr[], int n);

int main()
{
	int arr[SIZE] = { 3, 1, 4, 6, 7, 5, 2, 9, 8 };

	//插入排序
	insert_sort(arr, SIZE);

	//打印排序后的数组元素
	print_array(arr, SIZE);

	return 0;
}

void insert_sort(int arr[], int n)
{
	int j;
	for (int i = 1; i < n; i++) {
		int temp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > temp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}