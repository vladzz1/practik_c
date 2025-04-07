#include <iostream>
using namespace std;
#define num1 12
#define num2 7

short n = 0;

void printCube(int size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << endl;
}

void printTriangle(int size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size; j++)
		{
			if (i >= j)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

int change(int object)
{
	return object + 1;
}

void changeArray(int arr[], int size, int func (int))
{
	for (short i = 0; i < size; i++)
	{
		arr[i] = func(arr[i]);
	}
}

void arraysAction(int arr1[], int arr2[], int arr3[], int size, int func (int*, int*, int))
{
	for (short i = 0; i < size; i++)
	{
		arr3[i] = func(arr1, arr2, size);
		n++;
	}
	n = 0;
}

int arraysChange(int arr1[], int arr2[], int size)
{
	return arr1[n] + arr2[n];	
}

void main()
{
	//завдання 1

	int size = 7;
	void (*pPrint) (int);
	pPrint = printCube;
	pPrint(size);
	pPrint = printTriangle;
	pPrint(size);
	cout << "----------------\n";

	//завдання 2

	size = 5;
	int arr[5]{};
	for (short i = 0; i < size; i++)
	{
		cout << i + 1 << " enter number: ";
		cin >> arr[i];
	}
	for (short i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	void (*pChange) (int*, int, int (int));
	pChange = changeArray;
	pChange(arr, size, change);
	for (short i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "----------------\n";

	//завдання 3

	int arr1[5]{};
	for (short i = 0; i < size; i++)
	{
		cout << "1 " << i + 1 << " enter number: ";
		cin >> arr1[i];
	}
	int arr2[5]{};
	for (short i = 0; i < size; i++)
	{
		cout << "2 " << i + 1 << " enter number: ";
		cin >> arr2[i];
	}
	for (short i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	for (short i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	int arr3[5]{};
	void (*pArraysA) (int*, int*, int*, int, int (int*, int*, int));
	pArraysA = arraysAction;
	pArraysA(arr1, arr2, arr3, size, arraysChange);
	for (short i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	cout << "----------------\n";

	//завдання 4

	if (num1 < num2)
	{
		cout << "num1 is less";
	}
	else
	{
		cout << "num2 is less";
	}
	cout << endl;
	if (num1 > num2)
	{
		cout << "num1 is greater";
	}
	else
	{
		cout << "num2 is greater";
	}
	cout << endl;
	cout << num1 * num2;
	cout << endl;
	if (num1 % 2 == 0)
	{
		cout << "number is even";
	}
	else
	{
		cout << "number is not even";
	}
	cout << endl;
}