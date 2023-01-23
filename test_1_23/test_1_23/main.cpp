#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;

////1.2.2函数模板注意事项
////利用模板提供通用的交换函数
//template <class T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	myswap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	//myswap(a, c);//1、自然类型推到，必须推导出一致的数据类型才能使用
//}
//
//template <class T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void test02()
//{
//	func<int>();//2、模板必须确定出T的数据类型，才可以使用
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}



//函数模板案例
//template <class T>
//void myswap(T& a, T& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//template <class T>
//void mysort(T arr[], int num)
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j <= num - 2 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				myswap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}
//
//template <class T>
//void myprint(T arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n";
//}
//
//void test01()
//{
//	char arr[] = "fedcba";
//	int num = sizeof(arr) / sizeof(arr[0]);
//	mysort(arr, num);
//	myprint(arr, num);
//}
//
//void test02()
//{
//	int arr[] = { 324,546,6346,243,7865 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	mysort(arr, num);
//	myprint(arr, num);
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}



////普通函数与函数模板之间的区别
////普通函数可以发生自动类型转换（隐式类型转换）
////函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
////如果利用显式指定类型的方式，可以发生隐式类型转换
////普通函数
//int myadd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template <class T>
//T myadd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << myadd01(a, c) << endl;
//	cout << myadd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



////普通函数和函数模板的调用规则
//void myprint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//
//template <class T>
//void myprint(T a, T b)
//{
//	cout << "调用模板" << endl;
//}
//
//template <class T>
//void myprint(T a, T b, T c)
//{
//	cout << "调用重载的函数模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	myprint(a, b);//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//	myprint<>(a, b);//2、可以通过空模板参数列表来强制调用函数模板
//	int c = 30;
//	myprint(a, b, c);//3、函数模板同样存在重载
//	char c1 = 'a';
//	char c2 = 'b';
//	myprint(c1, c2);//4、如果函数模板可以产生更好的匹配，优先调用函数模板
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//};
//
//template <class T>
//bool mycompare(T a, T b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////具体化
//template<> bool mycompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = mycompare(a, b);
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	} 
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d, %d, %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = -128;
//	printf("%u", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 128;
//	printf("%u", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//}

#include <stdio.h>

int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u", i);
	}
}