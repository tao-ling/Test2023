//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;

//template <class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void MyPrint()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int>p1("Tom", 18);
//	p1.MyPrint();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


////类模板和函数模板的区别
//template <class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void MyPrint()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	//Person p1("Tom", 18);//1、类模板没有自动类型推导的使用方式
//	Person<string, int> p1("Tom", 18);
//	p1.MyPrint();
//}
//
//void test02()
//{
//	Person<string> p2("LiHua", 19);//2、类模板中的模板参数列表可以指定默认参数
//	p2.MyPrint();
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


////类模板对象做函数参数
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	void MyPrint()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////1、指定传入类型
//void PrintPerson01(Person<string, int>& p1)
//{
//	;
//}
//
//void test01()
//{
//	Person<string, int> p1("Tom", 18);
//	PrintPerson01(p1);
//}
//
////2、参数模块化
//template <class T1, class T2>
//void PrintPerson02(Person<T1, T2> &p2)
//{
//	;
//}
//
//void test02()
//{
//	Person<string, int> p2("Jak", 19);
//	PrintPerson02(p2);
//}
//
////整个类模块化
//template <class T>
//void PrintPerson03(T& p1)
//{
//	;
//}
//
//void test03()
//{
//	Person<string, int> p3("Dav", 20);
//	PrintPerson03(p3);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}


//类模板与继承
//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存、
//如果想灵活指定出父类中T的类型，子类也需要变为类模板

//template <class T>
//class Base
//{
//	T m1;
//};
//
//template <class T1, class T2>
//class Son :public Base<T1>
//{
//	T2 m2;
//};
//
//void test()
//{
//	Son<int, string> son;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

 //template <class T1, class T2>
 //class Person
 //{
 //public:
	// Person(T1 name, T2 age);
	// void ShowPerson();

	// T1 m_Name;
	// T2 m_Age;
 //};

 ////构造函数类外实现
 //template <class T1, class T2>
 //Person<T1, T2>::Person(T1 name, T2 age)
 //{
	// m_Name = name;
	// m_Age = age;
 //}

 //template <class T1, class T2>
 //void Person<T1, T2>::ShowPerson()
 //{
	// cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
 //}

 //void test()
 //{
	// Person<string, int> p("Tom", 18);
	// p.ShowPerson();
 //}

 //int main()
 //{
	// test();
	// system("pause");
	// return 0;
 //}

//#include "Person.hpp"
//
//void test()
//{
//	Person<string, int> p("Tom", 18);
//	p.ShowPerson();
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
//
//template <class T1, class T2>
//class Person;
//
//template <class T1,class T2>
//void PrintPerson2(Person<T1, T2>& p)
//{
//	cout << "name:" << p.m_Name << " age:" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	friend void PrintPerson1(Person<T1, T2>& p)
//	{
//		cout << "name:" << p.m_Name << " age:" << p.m_Age << endl;
//	}
//	friend void PrintPerson2<>(Person<T1, T2>& p);
//public:
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	PrintPerson1(p);
//}
//void test02()
//{
//	Person<string, int> p("Jerry", 21);
//	PrintPerson2(p);
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

#include "MyArrary.hpp"

void test()
{
	MyArrary<int> arr1(20);
	MyArrary<int> arr2(arr1);
	MyArrary<int> arr3(100);
	arr3 = arr1;
}

int main()
{
	test();
	system("pause");
	return 0;
}