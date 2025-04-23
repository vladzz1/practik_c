#include <iostream>
using namespace std;

class Array
{
	long* arr;
	int size;
public:
	Array()
	{
		size = 5;
		for (short i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	explicit Array(int size)
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	Array(Array& array)
	{
		this->size = array.size;
		for (short i = 0; i < array.size; i++)
		{
			this->arr[i] = array.arr[i];
		}
	}
	void setRandVelue()
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
		}
	}
	void setKeyboardVelue()
	{
		for (short i = 0; i < size; i++)
		{
			int velue;
			cout << i + 1 << ". enter velue: ";
			cin >> velue;
			arr[i] = velue;
		}
	}
	void setByDefaultVelue()
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	void printArray(const Array* arr)const
	{
		if (arr != nullptr)
		{
			for (short i = 0; i < size; i++)
			{
				cout << &arr[i] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "array empty\n";
		}
	}
	void addElementArr(Array element, Array* arr)
	{
		size++;
		Array* temp = new Array[size]{};
		for (short i = 0; i < size - 1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size - 1] = element;
		delete[] arr;
		arr = temp;
	}
	void deleteElementArr(int index, Array* arr)
	{
		Array* temp = new Array[size]{};
		for (short i = 0; i < size - 1; i++)
		{
			if (i < index)
			{
				temp[i] = arr[i];
			}
			if (i >= index)
			{
				temp[i] = arr[i + 1];
			}
		}
		size--;
		delete[] arr;
		arr = temp;
	}
	void descendingSort()
	{
		for (short i = 0; i < size - 1; i++)
		{
			for (short j = 0; j < size - i - 1; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	void ascendingSort()
	{
		for (short i = 0; i < size - 1; i++)
		{
			for (short j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[i];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	void findMinimum()const
	{
		short min = arr[0];
		for (short i = 0; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		cout << "minimum number: " << min << endl;
	}
	void findMaximum()const
	{
		short max = arr[0];
		for (short i = 0; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		cout << "maximum number: " << max << endl;
	}
	void findArithmeticMean()const
	{
		short sum(0);
		for (short i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		cout << "arithmetic mean: " << sum / size << endl;
	}
	~Array()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
};

void main()
{
	//explicit - явно
	//implicit - неявно
	srand(time(0));
}
