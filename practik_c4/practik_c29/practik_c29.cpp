#include <iostream>
using namespace std;

class Queue
{
	struct Element
	{
		string value;
		int priority;
		void printE()
		{
			cout << "value: " << value << ". priority: " << priority << endl;
		}
	};
	Element* arr;
	int size;
public:
	Queue() :arr(nullptr), size(0) {}
	void enqueue(string value, int priority)
	{
		int index(0);
		while (index < size && arr[index].priority < priority)
		{
			index++;
		}
		size++;
		Element* temp = new Element[size];
		for (short i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		temp[index] = Element{ value, priority };
		for (short i = index; i < size - 1; i++)
		{
			temp[i + 1] = arr[i];
		}
		if (arr != nullptr)
		{
			delete[] arr;
		}
		arr = temp;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	Element dequeue()
	{
		if (!isEmpty())
		{
			Element first = arr[0];
			for (short i = 0; i < size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			size--;
			return first;
		}
		return Element();
	}
	void printQ()
	{
		cout << "-----------------------------------------\n";
		for (short i = 0; i < size; i++)
		{
			cout << arr[i].value << " : " << arr[i].priority << " ";
		}
		cout << "\n-----------------------------------------\n";
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
	Queue q;
	q.enqueue("A", 1);
	q.enqueue("B", 2);
	q.enqueue("C", 3);
	q.enqueue("G", 5);
	q.enqueue("K", 8);
	q.printQ();
	q.enqueue("D", 4);
	q.printQ();
	while (!q.isEmpty())
	{
		q.dequeue().printE();
	}
}