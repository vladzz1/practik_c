#include <iostream>
using namespace std;

void fillArr(int* arr, short size)
{
	for (short i = 0; i < size; i++)
	{
		arr[i] = rand() % (40 - 10) + 10;
	}
}

void printArr(const int* arr, short size)
{
	for (short i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void addStartArr(int element, int* & arr, int& size)
{
	size++;
	int* tmp = new int [size] {};
	for (short i = 1; i < size; i++)
	{
		tmp[i] = arr[i - 1];
	}
	tmp[0] = element;
	delete[] arr;
	arr = tmp;
}

void addEndArr(int element, int*& arr, int& size)
{
	size++;
	int* tmp = new int [size] {};
	for (short i = 0; i < size - 1; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size - 1] = element;
	delete[] arr;
	arr = tmp;
}

void deleteEndArr(int*& arr, int& size)
{
	int* tmp = new int [size] {};
	for (short i = 0; i < size - 1; i++)
	{
		tmp[i] = arr[i];
	}
	size--;
	delete[] arr;
	arr = tmp;
}

void deleteStartArr(int*& arr, int& size)
{
	int* tmp = new int [size] {};
	for (short i = 1; i < size; i++)
	{
		tmp[i] = arr[i + 1];
	}
	size--;
	tmp[0] = arr[1];
	delete[] arr;
	arr = tmp;
}

void deleteIndexArr(int index, int*& arr, int& size)
{
	int* tmp = new int [size] {};
	for (short i = 0; i < size - 1; i++)
	{
		if (i < index)
		{
			tmp[i] = arr[i];
		}
		if (i >= index)
		{
			tmp[i] = arr[i + 1];
		}
	}
	size--;
	delete[] arr;
	arr = tmp;
}

void addIndexArr(int element, int index, int*& arr, int& size)
{
	size++;
	int* tmp = new int [size] {};
	for (short i = 0; i < size - 1; i++)
	{
		if (i < index)
		{
			tmp[i] = arr[i];
		}
		if (i >= index)
		{
			tmp[i] = arr[i - 1];
		}
	}
	tmp[size - 1] = arr[size - 2];
	tmp[index] = element;
	delete[] arr;
	arr = tmp;
}

int main()
{
	srand(time(0));

	// завдання 1

	int* a = new int{ 45 };
	short* b = new short{ 34 };
	float* c = new float{ 25.45 };
	double* d = new double{};
	*d = (*a + *b + *c) / 3;
	cout << "arithmetic mean: " << *d << endl;
	if (*a > *b && *a > *c)
	{
		cout << *a << " more\n";
	}
	else if (*b > *a && *b > *c)
	{
		cout << *b << " more\n";
	}
	else
	{
		cout << *c << " more\n";
	}
	delete a;
	delete b;
	delete c;
	delete d;
	cout << "-----------------------\n";

	//завдання 2

	int size = 5;
	int* arr = new int[size] {};
	for (short i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (short i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int* arr2 = new int[size - 1] {};
	for (short i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
		cout << arr2[i] << " ";
	}
	delete arr;
	delete arr2;
	cout << "\n-----------------------\n";

	//завдання 3

	int* arr = new int [size] {};
	fillArr(arr, size);
	printArr(arr, size);
	int velue;
	cout << "\nEnter a value for adding: ";
	cin >> velue;
	addStartArr(velue, arr, size);
	printArr(arr, size);
	cout << "\nEnter a value for adding: ";
	cin >> velue;
	addEndArr(velue, arr, size);
	printArr(arr, size);
	deleteEndArr(arr, size);
	cout << endl;
	printArr(arr, size);
	deleteStartArr(arr, size);
	cout << endl;
	printArr(arr, size);
	cout << "\nEnter the index of the element you want to delete: ";
	int ind;
	cin >> ind;
	deleteIndexArr(ind, arr, size);
	printArr(arr, size);
	cout << "\nEnter a value for adding: ";
	cin >> velue;
	cout << "specify the index where you want to add the element: ";
	cin >> ind;
	addIndexArr(velue, ind, arr, size);
	printArr(arr, size);
}