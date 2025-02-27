//编译器内部错误：检查语句是否缺少分号；

#include<iostream>
#include<string>
using namespace std;
template<typename T>
class myArray
{
public:
	//有参构造
	myArray(int maxsize)
	{
		this->m_MaxSize = maxsize;
		this->Array = new T[maxsize];
		this->m_CurrentSize = 0;
	}
	//拷贝构造
	myArray(  myArray &ma)//为啥不能加const？
	{
		this->Array = new T[ma.get_maxsize()];//深拷贝
		this->m_MaxSize = ma.get_maxsize();
		this->m_CurrentSize = ma.get_currentsize();
		for (int i = 0; i < ma.get_currentsize(); i++)
		{
			this->Array[i] = ma.Array[i];
		}
	}
	//opreater=防止浅拷贝问题：
	myArray& operator=(const myArray& ma)
	{
		//先判断原来堆区是否有数据，如果有先释放,
		//防止之前指向的空间一直不被释放；
		if (this->Array != NULL)
		{
			delete[] this->Array;
			this->Array = NULL;
		}
		this->Array = new T[ma.get_maxsize()];//深拷贝
		this->m_MaxSize = ma.get_maxsize();
		this->m_CurrentSize = ma.get_currentsize();
		for (int i = 0; i < ma.get_currentsize(); i++)
		{
			this->Array[i] = ma.Array[i];
		}
		return*this;
	}
	//析构函数
	~myArray()
	{
		if (this->Array != NULL)
		{
			delete[] this->Array;
			this->Array = NULL;
		}

	}
	void add_back(const T a)
	{
		if (this->m_MaxSize > this->m_CurrentSize)
		{
			this->Array[this->m_CurrentSize] = a;
			this->m_CurrentSize++;
		}
		else
		{
			cout << "已超过数组最大容量，插入失败!" << endl;
		}
	}
	void del_back()
	{
		if (this->m_CurrentSize > 0)
		{
			this->m_CurrentSize--;
		}
		else
		{
			cout << "数组为空，删除失败!" << endl;
		}
	}
	//[]运算符重载
	T& operator[](int index)//加引用，为了将ma[i]可以作为左值；
	{
		return this->Array[index];
	}

	int get_currentsize()
	{
		return this->m_CurrentSize;
	}
	int get_maxsize()
	{
		return this->m_MaxSize;
	}

	void print_myArray()
	{
		for (int i = 0; i < this->get_currentsize(); i++)
		{
			cout << this->Array[i] << "\t";
		}
		cout << endl;
	}
private:
	T* Array;
	int m_MaxSize;
	int m_CurrentSize;
};