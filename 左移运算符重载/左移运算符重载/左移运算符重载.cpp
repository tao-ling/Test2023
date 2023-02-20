#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<< (ostream& out, const Person& p);
public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream& out, const Person& p)
{
	out << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
	return out;
}

void test()
{
	Person p1(10, 20);
	cout << p1 << "hello world" << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}