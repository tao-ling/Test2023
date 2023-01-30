//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void MyPrint(int val)
//{
//	cout << val << "\t";
//}
//
//void test()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//	//第一种遍历的方式
//	while (pBegin != pEnd)
//	{
//		cout << *pBegin << "\t";
//		pBegin++;
//	}
//	cout << "\n";
//
//	//第二种遍历的方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << "\n";
//
//	//第三种遍历方式
//	for_each(v.begin(), v.end(), MyPrint);
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
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("aaa", 1);
//	Person p2("bbb", 2);
//	Person p3("ccc", 3);
//	Person p4("ddd", 4);
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	for (vector<Person>::iterator pBegin = v.begin(); pBegin != v.end(); pBegin++)
//	{
//		cout << "姓名：" << pBegin->m_Name << " 年龄：" << pBegin->m_Age << endl;
//	}
//}
//
//void test02()
//{
//	cout << "\n";
//	Person p1("aaa", 1);
//	Person p2("bbb", 2);
//	Person p3("ccc", 3);
//	Person p4("ddd", 4);
//	vector<Person*> v;
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	for (vector<Person*>::iterator pBegin = v.begin(); pBegin != v.end(); pBegin++)
//	{
//		cout << "姓名：" << (*pBegin)->m_Name << " 年龄：" << (*pBegin)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
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
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	for (vector<vector<int>>::iterator pBegin = v.begin(); 
//		pBegin != v.end(); 
//		pBegin++)
//	{
//		for (vector<int>::iterator vit = (*pBegin).begin();
//			vit != (*pBegin).end();
//			vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

////string构造函数
//#include <iostream>
//using namespace std;
//#include <string>
//
//void test()
//{
//	string s1;
//	cout << "str1 = " << s1 << endl;
//
//	const char* str = "hello world";
//	string s2(str);
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "str3 = " << s3 << endl;
//
//	string s4(10, 'c');
//	cout << "str4 = " << s4 << endl;
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
//#include <string>
//
//void test()
//{
//	string str = "dashabi@sina.com";
//	int pos = str.find('@');
//	string str2 = str.substr(0, pos);
//	cout << str2 << endl;
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
//void my_print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	my_print(v1);
//	
//	vector<int> v2(v1.begin(), v1.end());
//	my_print(v2);
//
//	vector<int> v3(v2);
//	my_print(v3);
//
//	vector<int> v4(10, 100);
//	my_print(v4);
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
//void MyPrint(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	MyPrint(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量：" << v1.capacity() << endl;
//		cout << "v1的大小：" << v1.size() << endl;
//	}
//
//	v1.resize(5);
//	MyPrint(v1);
//	v1.resize(10);
//	MyPrint(v1);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void PrintVector(vector<int>& v)
//{
//	//通过迭代器输出数组
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	PrintVector(v);
//
//	v.pop_back();
//	PrintVector(v);
//
//	v.insert(v.begin(), 2, 100);
//	PrintVector(v);
//
//	/*v.erase(v.begin(), v.end());
//	PrintVector(v);*/
//
//	/*v.clear();
//	PrintVector(v);*/
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "数组的第一个元素为：" << v.front() << endl;
//	cout << "数组的最后一个元素为：" << v.back() << endl;
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
//
//void test()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "原数组容量：" << v.capacity() << endl;
//	cout << "原数组大小：" << v.size() << endl;
//	cout << endl;
//
//	v.resize(3);
//	cout << "改变数组大小后组容量：" << v.capacity() << endl;
//	cout << "改变数组大小后数组大小：" << v.size() << endl;
//	cout << endl;
//
//	vector<int>(v).swap(v);
//	cout << "收缩内存后组容量：" << v.capacity() << endl;
//	cout << "收缩内存后数组大小：" << v.size() << endl;
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
//#include <vector>
//using namespace std;
//
//void test()
//{
//	vector<int> v;
//	v.reserve(100000);
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "动态拓展内存的次数：" << num << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	PrintDeque(d1);

	sort(d1.begin(), d1.end());
	PrintDeque(d1);
}

int main()
{
	test();
	system("pause");
	return 0;
}