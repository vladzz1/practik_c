#include <iostream>
using namespace std;

template<typename T_arr>
class Array
{
	T_arr* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		arr = new T_arr[size] {};
	}
	Array(const initializer_list<T_arr>& list)
	{
		this->size = list.size();
		arr = new T_arr[size];
		int i = 0;
		for (T_arr elem : list)
		{
			arr[i++] = elem;
		}
	}
	void printArr()const
	{
		for (short i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void fill(const initializer_list<T_arr>& list)
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
		this->size = list.size();
		arr = new T_arr[size];
		int i = 0;
		for (T_arr elem : list)
		{
			arr[i++] = elem;
		}
	}
	T_arr searchMax(T_arr* arr);
	T_arr searchMin(T_arr* arr);
	T_arr descendingSort(T_arr* arr);
	T_arr ascendingSort(T_arr* arr);
	T_arr searchElem(T_arr* arr, T_arr element);
	T_arr replaceElem(T_arr* arr, T_arr element1, T_arr element2);
	~Array()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
};

template<typename T_arr>
T_arr Array<T_arr>::searchMax(T_arr* arr)
{
	T_arr max = arr[0];
	for (short i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

template<typename T_arr>
T_arr Array<T_arr>::searchMin(T_arr* arr)
{
	T_arr min = arr[0];
	for (short i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

template<typename T_arr>
T_arr Array<T_arr>::descendingSort(T_arr* arr)
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

template<typename T_arr>
T_arr Array<T_arr>::ascendingSort(T_arr* arr)
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

template<typename T_arr>
T_arr Array<T_arr>::searchElem(T_arr* arr, T_arr element)
{
	short count(0);
	for (short i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			count++;
		}
	}
	cout << "elements " << element << " found " << count << endl;
}

template<typename T_arr>
T_arr Array<T_arr>::replaceElem(T_arr* arr, T_arr element1, T_arr element2)
{
	for (short i = 0; i < size; i++)
	{
		if (arr[i] == element1)
		{
			arr[i] = element2;
		}
	}
}

void main()
{
	
}