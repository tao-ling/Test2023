#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	//成员函数实现+号运算符重载
	Person operator+(const Person& p)
	{
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}
	Person operator+(const int val)
	{
		Person tmp;
		tmp.m_A = this->m_A + val;
		tmp.m_B = this->m_B + val;
		return tmp;
	}

public:
	int m_A;
	int m_B;
};

/*
//全局函数实现+号运算符重载
Person operator+(const Person& p1, const Person& p2)
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}
Person operator+ (const Person & p1, const int x)
{
	Person tmp;
	tmp.m_A = p1.m_A + x;
	tmp.m_B = p1.m_B + x;
	return tmp;
}
*/

void test()
{
	Person p1(10, 10);
	Person p2(20, 20);
	Person p3 = p1 + p2;
	cout << "p3.m_A = " << p3.m_A << "  p3.m_B = " << p3.m_B << endl;

	Person p4 = p1 + 30;
	cout << "p4.m_A = " << p4.m_A << "  p4.m_B = " << p4.m_B << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}