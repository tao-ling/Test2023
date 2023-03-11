#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 10

void shell_sort(int* arr, int n);
void print_array(int* arr, int n);

int main()
{
	int arr[SIZE] = { 1, 3, 2, 5, 6, 7, 4, 8, 9, 10 };
	//希尔排序
	shell_sort(arr, SIZE);
	//打印数组
	print_array(arr, SIZE);
}

void shell_sort(int* arr, int n)
{
	for (int distance = n / 2; distance > 0; distance /= 2) {
		for (int i = distance; i < n; i++) {
			int temp = arr[i];
			int p;
			for (p = i; p >= distance && arr[p - distance] > temp; p -= distance) {
				arr[p] = arr[p - distance];
			}
			arr[p] = temp;
		}
	}
}

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}