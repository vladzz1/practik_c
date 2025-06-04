#include <iostream>
#include <windows.h>
#include <conio.h>
using std::cout; using std::endl; using std::exception;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

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
		if (size > 0)
		{
			arr = new int[size];
			topIndex = EMPTY;
		}
		else
		{
			throw exception("error: wrong size");
		}
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
		else
		{
			throw exception("error: stack full");
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
		else
		{
			throw exception("error: stack empty");
		}
	}
	bool peek()
	{
		if (!isEmpty())
		{
			return arr[topIndex];
		}
		else
		{
			throw exception("error: stack empty");
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

//---------------------------------------

class Queue
{
	int* arr;
	int maxSize;
	int topIndex;
public:
	Queue() = default;
	Queue(int max)
	{
		if (max > 0)
		{
			this->maxSize = max;
			arr = new int[maxSize];
			topIndex = 0;
		}
		else
		{
			throw exception("error: wrong size");
		}
	}
	bool isEmpty()const
	{
		return topIndex == 0;
	}
	bool isFull()const
	{
		return topIndex == maxSize;
	}
	void enqueue(int elem)
	{
		if (!isFull())
		{
			arr[topIndex++] = elem;
		}
		else
		{
			throw exception("error: stack full");
		}
	}
	int dequeue()
	{
		if (!isEmpty())
		{
			int first = arr[0];
			for (short i = 0; i < topIndex; i++)
			{
				arr[i] = arr[i + 1];
			}
			topIndex--;
			return first;
		}
		else
		{
			throw exception("error: stack empty");
		}
	}
	int getCount()
	{
		return topIndex;
	}
	void clear()
	{
		topIndex = 0;
	}
	void show()
	{
		for (short i = 0; i < topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Queue()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
};

void main()
{
	//throw try catch exception
	srand(time(0));
	try
	{
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

		//---------------------------------------

		Queue q(25);
		for (short i = 0; i < 10; i++)
		{
			q.enqueue(rand() & 50);
		}
		q.show();
		while (!q.isEmpty())
		{
			cout << "element: " << q.dequeue() << endl;
			_getch();
		}
	}
	catch (exception x)
	{
		setColor(4);
		cout << x.what() << endl;
		setColor(7);
	}
}