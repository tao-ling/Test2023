#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

void merge_sort(int* arr, int n);
void msort(int* arr, int* temp_arr, int left, int right);	//递归调用
void merge(int* arr, int* temp_arr, int lpos, int repos, int right_end);	//合并两个数组
void print_array(int* arr, int n);

int main(void)
{
	int arr[SIZE] = { 1, 3, 6, 4, 7, 8, 2, 9, 5 };
	merge_sort(arr, SIZE);
	print_array(arr, SIZE);
	return 0;
}

void merge_sort(int* arr, int n)
{
	int* temp_arr = malloc(n * sizeof(int));
	if (NULL == temp_arr) {
		printf("Out of space!\n");
		return;
	}
	msort(arr, temp_arr, 0, n - 1);
	free(temp_arr);
}

void msort(int* arr, int* temp_arr, int left, int right)
{
	int center;
	if (left < right) {
		center = (left + right) / 2;
		msort(arr, temp_arr, left, center);
		msort(arr, temp_arr, center + 1, right);
		merge(arr, temp_arr, left, center+1, right);
	}
}

void merge(int* arr, int* temp_arr, int lpos, int rpos, int right_end)
{
	int left_end = rpos - 1;
	int temp_pos = lpos;
	int num_element = right_end - lpos + 1;
	
	while (lpos <= left_end && rpos <= right_end) {
		if (arr[lpos] <= arr[rpos]) {
			temp_arr[temp_pos++] = arr[lpos++];
		}
		else {
			temp_arr[temp_pos++] = arr[rpos++];
		}
	}
	while (lpos <= left_end) {
		temp_arr[temp_pos++] = arr[lpos++];
	}
	while (rpos <= right_end) {
		temp_arr[temp_pos++] = arr[rpos++];
	}
	for (int i = 0; i < num_element; i++, right_end--) {
		arr[right_end] = temp_arr[right_end];
	}
}

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}