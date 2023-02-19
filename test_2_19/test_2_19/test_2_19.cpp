//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////成员属性设置为私有的
//class Person {
//public:
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName() {
//		return m_Name;
//	}
//
//	//获取年龄
//	int getAge() {
//		return m_Age;
//	}
//
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "你个老妖精" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name;		//可读可写
//	int m_Age;			//只读
//	string m_Lover;		//只写
//};
//
//int main()
//{
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//
//	//年龄设置
//	p.setAge(50);
//	cout << "年龄： " << p.getAge() << endl;
//
//	//情人设置
//	p.setLover("仓井");
//	//cout << "情人： " << p.m_Lover << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//void test01()
//{
//	//静态成员变量两种访问方式
//	//1、通过对象访问
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl;
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	//通过类名
//	cout << "m_A = " << Person::m_A << endl;
//
//	//cout << "m_B = " << Person::m_B << endl;		//私有权限访问不到
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////全局函数做友元
//#include <iostream>
//using namespace std;
//class Building
//{
//	//告诉编译器goodGay全局函数是Builing类的好朋友，可以访问类中的私有内容
//	friend void goodGay(Building* builing);
//public:
//	Building() {
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;	
//};
//
//void goodGay(Building* building)
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building b;
//	goodGay(&b);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}