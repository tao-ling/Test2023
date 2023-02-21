#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test01()
{
	//重载的（）操作符也称为仿函数
	MyPrint myFunc;
	myFunc("hello world");
}

class MyAdd
{
public:
	int operator()(int val1, int val2)
	{
		return val1 + val2;
	}
};

void test02()
{
	MyAdd add;
	int ret = add(10, 10);
	cout << "ret = " << ret << endl;
	//匿名对象调用，通过类型加小括号创建一个匿名对象，当前行执行完后立即被释放
	cout << "MyAdd()(100, 100) = " << MyAdd()(100, 100) << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}