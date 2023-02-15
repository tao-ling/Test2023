#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int MaxSubsequenceSum(int arr[], int sum);	/*求解最大子序列和*/

int main()
{
	int arr[6] = { 7, -2, 5, 3, -8, 6 };
	int MaxSum = MaxSubsequenceSum(arr, 6);
	printf("arr数组的最大子序列和为：%d", MaxSum);
	return 0;
}

int MaxSubsequenceSum(int arr[], int sum)
{
	int MaxSum = 0;
	for (int i = 0; i < sum; i++) {
		for (int j = i; j < sum; j++) {
			int Sum = 0;
			for (int k = i; k <= j; k++) {
				Sum += arr[k];
				if (Sum > MaxSum) {
					MaxSum = Sum;
				}
			}	
		}
	}
	return MaxSum;
}