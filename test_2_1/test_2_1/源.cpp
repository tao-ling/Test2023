//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include <list>
//
//void PrintList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	PrintList(l1);
//
//	list<int> l2(l1.begin(), l1.end());
//	PrintList(l2);
//
//	list<int> l3(10, 1000);
//	PrintList(l3);
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
//#include <list>
//
//void PrintList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	PrintList(l1);
//
//	list<int> l2 = l1;
//	PrintList(l2);
//
//	list<int> l3;
//	l3.assign(l2.begin(), l2.end());
//	PrintList(l3);
//
//	list<int> l4;
//	l4.assign(10, 100);
//	PrintList(l4);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//pair对组
#include <iostream>
using namespace std;

int main()
{
	pair<string, int> p1("Tom", 18);
	cout << "p1.first = " << p1.first << " p1.second" << p1.second << endl;

	pair<string, int> p2 = make_pair("Jak", 19);
	cout << "p1.first = " << p1.first << " p1.second" << p1.second << endl;
	system("pause");
	return 0;
}