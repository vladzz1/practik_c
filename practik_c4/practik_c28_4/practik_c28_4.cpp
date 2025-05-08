#include <iostream>
using namespace std;

//class Stack
//{
//	enum { EMPTY = -1, FULL = 9 };
//	char arr[FULL + 1];
//	int topIndex;
//public:
//	Stack()
//	{
//		topIndex = EMPTY;
//	}
//	Stack(const Stack& other) = delete;
//	bool push(char elem)
//	{
//		if (!isFull())
//		{
//			arr[++topIndex] = elem;
//			return true;
//		}
//		return false;
//	}
//	bool isFull()const
//	{
//		return topIndex == FULL;
//	}
//	bool isEmpty()const
//	{
//		return topIndex == EMPTY;
//	}
//	int pop()
//	{
//		if (!isEmpty())
//		{
//			return arr[topIndex--];
//		}
//	}
//	int getCount()const
//	{
//		return topIndex + 1;
//	}
//	void clear()
//	{
//		topIndex = EMPTY;
//	}
//	void printS()const
//	{
//		for (short i = 0; i < getCount(); i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	~Stack() = default;
//};

//--------------------------------------------

class Stack
{
	enum { EMPTY = -1 };
	char* arr;
	int size;
	int topIndex;
public:
	Stack() = delete;
	Stack(int size) :size(size)
	{
		arr = new char[size];
		topIndex = EMPTY;
	}
	bool isFull()const
	{
		return topIndex == size - 1;
	}
	bool push(char elem)
	{
		if (!isFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		else
		{
			resize();
			arr[++topIndex] = elem;
			return true;
		}
	}
	bool isEmpty()const
	{
		return topIndex == EMPTY;
	}
	bool pop()
	{
		if (!isEmpty())
		{
			return arr[topIndex--];
		}
	}
	bool peek()
	{
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}
	int getCount()const
	{
		return topIndex + 1;
	}
	void clear()
	{
		topIndex = EMPTY;
	}
	void printS()const
	{
		for (short i = 0; i < getCount(); i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void resize()
	{
		this->size *= 2;
		char* temp = new char[size];
		for (short i = 0; i < topIndex + 1; i++)
		{
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
	}
	~Stack()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
};

void main()
{
	/*Stack st;
	st.push('a');
	st.push('v');
	st.push('n');
	st.push('g');
	st.push('w');
	st.printS();*/

	//------------

	Stack st(5);
	st.push('a');
	st.push('v');
	st.push('n');
	st.push('g');
	st.push('w');
	st.printS();
	st.push('g');
	st.push('w');
	st.printS();
}