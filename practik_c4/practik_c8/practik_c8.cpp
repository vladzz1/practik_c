#include <iostream>
using namespace std;

//- - - - - - - - - - - - -

void positiveNegativeZero(int arr[], short size)
{
	short positive = 0;
	short negative = 0;
	short zero = 0;
	for (short i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			positive++;
		}
		if (arr[i] < 0)
		{
			negative++;
		}
		if (arr[i] == 0)
		{
			zero++;
		}
	}
	cout << "in the list positive numbers: " << positive << endl << "negative and: " << negative << endl << "zeros: " << zero << endl;
}

//- - - - - - - - - - - - -

void matrix()
{
	const short row = 5;
	const short col = 5;
	int arr2[row][col];
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			arr2[i][j] = rand() % (40 - 10) + 10;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	short max = arr2[0][0];
	short min = arr2[0][0];
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			if (i == j && arr2[i][j] > max)
			{
				max = arr2[i][j];
			}
			if (i == j && arr2[i][j] < min)
			{
				min = arr2[i][j];
			}
		}
	}
	cout << "maximum element: " << max << endl << "minimal element: " << min << endl;
}

//- - - - - - - - - - - - -

void main()
{
	//завдання 1

	srand(time(0));
	const short size = 10;
	int arr[size];
	for (short i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 - 20;
	}
	positiveNegativeZero(arr, size);
	cout << "---------------------------\n";

	//завдання 2

	matrix();
}