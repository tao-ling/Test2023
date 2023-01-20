#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
template <typename T>

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;
	//自动类型推导
	//myswap(a, b);
	//显式指定类型
	myswap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}