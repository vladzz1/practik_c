#include <iostream>
#include <windows.h>
using std::cout;using std::cin;using std::endl;using std::string;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

template<typename T>
class Queue
{
	struct Element
	{
		T value;
		int priority;
		void printE()
		{
			cout << "file name: " << value << ". priority: " << priority << endl;
		}
	};
	Element* arr;
	int size;
public:
	Queue() :arr(nullptr), size(0) {}
	void enqueue(T value, int priority)
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
		cout << "\t---------------------------------------\n";
		for (short i = 0; i < size; i++)
		{
			cout << "\tfile name: " << arr[i].value << ". priority: " << arr[i].priority << endl;
		}
		cout << "\t---------------------------------------\n";
	}
	~Queue()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
};

short main()
{
	Queue<string> q;
	short key;
	string name;
	short position;
	while (true)
	{
		cout << "\tenter\n";
		cout << "\t1. add document\n";
		cout << "\t2. print\n";
		cout << "\t3. delete\n";
		cout << "\t0. exit\n";
		cout << "\twhat do you want to do?\n\t";
		cin >> key;
		switch (key)
		{
		case 0:
			return 0;
		case 1:
			cout << "\tenter a file name: ";
			cin >> name;
			cout << "\tselect a position\n";
			cout << "\t1. director\n\t2. manager\n\t3. administrator\n\t4. guest\n\t";
			cin >> position;
			if (position > 0 && position < 5)
			{
				q.enqueue(name, position);
				break;
			}
			else
			{
				setColor(4);
				cout << "there is no such position in the menu\n";
				setColor(7);
				break;
			}
		case 2:
			q.printQ();
			break;
		case 3:
			setColor(5);
			cout << "files have been deleted:\n";
			cout << "---------------------------------------\n";
			while (!q.isEmpty())
			{
				q.dequeue().printE();
			}
			cout << "---------------------------------------\n";
			setColor(7);
			break;
		default:
			setColor(4);
			cout << "there is no \"" << key << "\" in the menu\n";
			setColor(7);
			break;
		}
	}
}