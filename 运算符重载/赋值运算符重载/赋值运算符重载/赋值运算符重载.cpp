#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		//将年龄数据开辟到堆区
		m_Age = new int(age);
	}

	//重载赋值运算符
	Person& operator=(Person& p)
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		return *this;
	}
	~Person()
	{
		if (m_Age == NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	int* m_Age;
};

void test01()
{
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;
	cout << "*p1.m_Age = " << *p1.m_Age << endl;
	cout << "*p2.m_Age = " << *p2.m_Age << endl;
	cout << "*p3.m_Age = " << *p3.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}