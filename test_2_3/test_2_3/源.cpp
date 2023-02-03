#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	bool operator== (const Person& p)
	{
		return this->m_Age == p.m_Age;
	}
	string m_Name;
	int m_Age;
};

class Ageless35
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age < 35;
	}
};

void test()
{
	vector<Person> v;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), Ageless35());
	cout << "小于35岁的个数" << num << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}