#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArrary
{
public:
	//有参数的构造函数
	MyArrary(int capacity)
	{
		cout << "调用有参构造函数" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->m_Address = new T[this->m_Capacity];
	}

	//拷贝构造函数
	MyArrary(const MyArrary& arr)
	{
		cout << "调用拷贝构造函数" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->m_Address = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Address[i] = arr.m_Address[i];
		}
	}

	//重载=操作符，防止浅拷贝问题
	MyArrary& operator= (const MyArrary& arr)
	{
		cout << "调用重载等号操作符" << endl;
		if (this->m_Address != NULL)
		{
			delete[] this->m_Address;
			this->m_Address = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->m_Address = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Address[i] = arr.m_Address[i];
		}
		return *this;
	}

	~MyArrary()
	{
		cout << "调用析构函数" << endl;
		if (this->m_Address != NULL)
		{
			delete[] this->m_Address;
			this->m_Address = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}
private:
	T* m_Address;
	int m_Capacity;
	int m_Size;
};