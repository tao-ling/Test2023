//#define _CRT_SECURE_NO_WARNINGS 1
///*
//* 多态实现抽象计算机的类
//*/
//#include <iostream>
//using namespace std;
//
//class AbstractCalculator
//{
//public:
//	virtual int getResult() {
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
////加法计算器
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器
//class SubCalculator : public AbstractCalculator
//{
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器
//class MulCalculator : public AbstractCalculator
//{
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test()
//{
//	//创建加法计算器
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num2 << "+" << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//创建乘法计算器
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
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
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//析构函数加上virtual关键字，变成虚析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
//}
////纯虚析构 需要声明也需要实现 以防在父类中在堆区创建对象时也必须在父类中释放堆区的内存
////和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//public:
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void test()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//
//	ofs << "姓名：张三" << endl;
//	ofs << "姓名：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	ofs.close();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <fstream>
//#include <string>
//#include <iostream>
//using namespace std;
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//		cout << "打开文件失败！" << endl;
//		return;
//	}
//
//	string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//	}
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};
//二进制文件 写文件
void test01()
{
	//创建输入流对象
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	
	//关闭文件
	ifs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}