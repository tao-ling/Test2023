#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N);

int main()
{
	int arr[6] = { 7, -2, 5, 3, -8, 6 };
	printf("arr数组的最大子序列和为：%d", MaxSubsequenceSum(arr, 6));
	return 0;
}

int MaxSubsequenceSum(const int A[], int N)
{
	int MaxSum = 0;
	for (int i = 0; i < N; i++) {
		int Sum = 0;
		for (int j = i; j < N; j++) {
			Sum += A[j];
			if (Sum > MaxSum) {
				MaxSum = Sum;
			}
		}
	}
	return MaxSum;
}