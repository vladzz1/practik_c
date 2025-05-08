#include <iostream>
using namespace std;

class Stack
{
	enum { EMPTY = -1 };
	int* arr;
	int size;
	int topIndex;
public:
	Stack() = delete;
	Stack(int size) :size(size)
	{
		arr = new int[size];
		topIndex = EMPTY;
	}
	bool isFull()const
	{
		return topIndex == size - 1;
	}
	bool push(int elem)
	{
		if (!isFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		return false;
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
	srand(time(0));
	Stack st(15);
	while (!st.isFull())
	{
		st.push(rand() % 100);
	}
	st.printS();
	cout << "length: " << st.getCount() << endl;
	while (!st.isEmpty())
	{
		cout << "element delete - " << st.pop() << endl;
	}
	cout << "count: " << st.getCount() << endl;
}