#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N);

int main()
{
	int arr[8] = { 4, -3, 5, -2, -1, 2, 6, -2 };
	printf("arr数组的最大子序列和为：%d", MaxSubsequenceSum(arr, 8));
	return 0;
}

int MaxSubsequenceSum(const int A[], int N)
{
	int MaxSum = 0;
	int Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += A[i];
		if (Sum > MaxSum) {
			MaxSum = Sum;
		}
		else if(Sum < 0) {
			Sum = 0;
		}
	}
	return MaxSum;
}