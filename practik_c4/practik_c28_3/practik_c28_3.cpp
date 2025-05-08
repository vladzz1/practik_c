#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
	int* arr;
	int maxSize;
	int topIndex;
public:
	Queue() = default;
	Queue(int max)
	{
		this->maxSize = max;
		arr = new int[maxSize];
		topIndex = 0;
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
	srand(time(0));
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