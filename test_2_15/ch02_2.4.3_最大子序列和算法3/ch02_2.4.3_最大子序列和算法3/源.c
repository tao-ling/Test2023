#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

static int MaxSubSum(const int A[], int Left, int Right);
int MaxSubsequenceSum(const int A[], int N);
int Max3(int a1, int a2, int a3);

int main()
{
	int arr[8] = { 4, -3, 5, -2, -1, 2, 6, -2};
	printf("arr数组的最大子序列和为：%d", MaxSubsequenceSum(arr, 8));
	return 0;
}

int MaxSubsequenceSum(const int A[], int N)
{
	return MaxSubSum(A, 0, N - 1);
}

int MaxSubSum(const int A[], int Left, int Right)
{
	int MaxLeftSum, MaxRightSum;
	int MaxLeftBorderSum, MaxRightBorderSum;
	int	LeftBorderSum, RightBorderSum;
	int Center, i;

	if (Left == Right) {	/*Base Case*/
		return A[Left];
	}

	Center = (Left + Right) / 2;
	MaxLeftSum = MaxSubSum(A, Left, Center);
	MaxRightSum = MaxSubSum(A, Center + 1, Right);

	MaxLeftBorderSum = 0;
	LeftBorderSum = 0;
	for (i = Center; i >= Left; i--){
		LeftBorderSum += A[i];
		if (LeftBorderSum > MaxLeftBorderSum) {
			MaxLeftBorderSum = LeftBorderSum;
		}
	}

	MaxRightBorderSum = 0;
	RightBorderSum = 0;
	for (i = Center + 1; i <= Right; i++) {
		RightBorderSum += A[i];
		if (RightBorderSum > MaxRightBorderSum) {
			MaxRightBorderSum = RightBorderSum;
		}
	}

	return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
}

int Max3(int a1, int a2, int a3)
{
	if (a1 > a2 && a1 > a3) {
		return a1;
	}
	else if (a2 > a1 && a2 > a3) {
		return a2;
	}
	else {
		return a3;
	}
}