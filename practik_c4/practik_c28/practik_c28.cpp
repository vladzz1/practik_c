#include <iostream>
using namespace std;

class Stack
{
	enum { EMPTY = -1, FULL = 9 };
	int arr[FULL + 1];
	int topIndex;
public:
	Stack()
	{
		topIndex = EMPTY;
	}
	Stack(const Stack& other) = delete;
	bool push(int elem)
	{
		if (!isFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		return false;
	}
	bool isFull()const
	{
		return topIndex == FULL;
	}
	bool isEmpty()const
	{
		return topIndex == EMPTY;
	}
	int pop()
	{
		if (!isEmpty())
		{
			return arr[topIndex--];
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
	~Stack() = default;
};

void main()
{
	Stack st;
	st.push(15);
	st.push(7);
	st.push(4);
	st.printS();
	cout << "count: " << st.getCount() << endl;
	while (!st.isEmpty())
	{
		cout << st.pop() << endl;
	}
	cout << "count: " << st.getCount() << endl;
}