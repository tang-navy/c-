//�������ڲ����󣺼������Ƿ�ȱ�ٷֺţ�

#include<iostream>
#include<string>
using namespace std;
template<typename T>
class myArray
{
public:
	//�вι���
	myArray(int maxsize)
	{
		this->m_MaxSize = maxsize;
		this->Array = new T[maxsize];
		this->m_CurrentSize = 0;
	}
	//��������
	myArray(  myArray &ma)//Ϊɶ���ܼ�const��
	{
		this->Array = new T[ma.get_maxsize()];//���
		this->m_MaxSize = ma.get_maxsize();
		this->m_CurrentSize = ma.get_currentsize();
		for (int i = 0; i < ma.get_currentsize(); i++)
		{
			this->Array[i] = ma.Array[i];
		}
	}
	//opreater=��ֹǳ�������⣺
	myArray& operator=(const myArray& ma)
	{
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�,
		//��ֹ֮ǰָ��Ŀռ�һֱ�����ͷţ�
		if (this->Array != NULL)
		{
			delete[] this->Array;
			this->Array = NULL;
		}
		this->Array = new T[ma.get_maxsize()];//���
		this->m_MaxSize = ma.get_maxsize();
		this->m_CurrentSize = ma.get_currentsize();
		for (int i = 0; i < ma.get_currentsize(); i++)
		{
			this->Array[i] = ma.Array[i];
		}
		return*this;
	}
	//��������
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
			cout << "�ѳ��������������������ʧ��!" << endl;
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
			cout << "����Ϊ�գ�ɾ��ʧ��!" << endl;
		}
	}
	//[]���������
	T& operator[](int index)//�����ã�Ϊ�˽�ma[i]������Ϊ��ֵ��
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