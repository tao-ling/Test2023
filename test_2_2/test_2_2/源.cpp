//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include <set>
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void PrintSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); 
//		it != s.end();
//		it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void PrintSet(const set<int, MyCompare>& s)
//{
//	for (set<int, MyCompare>::const_iterator it = s.begin();
//		it != s.end();
//		it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	PrintSet(s1);
//
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(40);
//	PrintSet(s2);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <set>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class MyCompare
//{
//public:
//	bool operator()(const Person p1, const Person p2)const
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void PrintSet(const set<Person, MyCompare>& s)
//{
//	for (set<Person>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "name:" << it->m_Name << " age:" << it->m_Age << endl;
//	}
//	cout << endl;
//}
//
//void test()
//{
//	set<Person,MyCompare> s;
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	PrintSet(s);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <map>
//
//void PrintMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first << " vaule:" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	PrintMap(m);
//
//	map<int, int> m2(m);
//	PrintMap(m2);
//
//	map<int, int> m3 = m2;
//	PrintMap(m3);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没有找到！" << endl;
//	}
//	else
//	{
//		cout << "找到：" << *it << endl;
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <functional>
//
//void test()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//void test()
//{
//	vector<int> v;
//
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <vector>
//
//void print01(int val)
//{
//	cout << val << " ";
//}
//
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val+100;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	
//	vector<int> vTransform;
//	vTransform.resize(v.size());
//	transform(v.begin(), v.end(), vTransform.begin(), TransForm());
//	for_each(vTransform.begin(), vTransform.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void test()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator pos = find(v.begin(), v.end(), 40);
//	if (pos != v.end())
//	{
//		cout << "找到了" << *pos << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person> v;
//	Person p1("刘备", 40);
//	Person p2("关羽", 40);
//	Person p3("张飞", 40);
//	Person p4("赵云", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	Person pp("张飞", 40);
//
//	vector<Person>::iterator pos = find(v.begin(), v.end(), pp);
//
//	if (pos != v.end())
//	{
//		cout << "找到了" << " name:" << pos->m_Name << " age:" << pos->m_Age << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	test02();
//	system("pause");
//	return 0;
//}

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
	string m_Name;
	int m_Age;
};

class GreaterTwo
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 2;
	}
};

void test()
{
	vector<Person> v;
	Person p1("aaa", 1);
	Person p2("bbb", 2);
	Person p3("ccc", 3);
	Person p4("ddd", 4);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), GreaterTwo());
	if (it != v.end())
	{
		cout << "找到：" << it->m_Name << " " << it->m_Age << endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}