#include <iostream>
using std::cout;
using std::endl;

//--------------------------

//void replace(int* arr[], short size)
//{
//	for (short i = 0; i < size; i++)
//	{
//		if (*(arr + i) < 0);
//		{
//			*(arr + i) = 0;
//		}
//	}
//}

//--------------------------

void replaceCol(int arr2[][5], short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		int temp = arr2[i][0];
		arr2[i][0] = arr2[i][1];
		arr2[i][1] = temp;
	}
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}

//--------------------------
void main()
{
	srand(time(0));

	//завдання 1

	short a = 5;
	short b = 7;
	short c = 3;
	short& l_a = a;
	short& l_b = b;
	short& l_c = c;
	cout << "l_a * l_b * l_c = " << l_a * l_b * l_c << endl;
	cout << "l_a + l_b = l_c / 2 = " << l_a + l_b + l_c / 2 << endl;
	if (l_a < l_b && l_a < l_c)
	{
		cout << "minimum number: " << l_a << endl;
	}
	else if (l_b < l_a && l_b < l_c)
	{
		cout << "minimum number: " << l_b << endl;
	}
	else
	{
		cout << "minimum number: " << l_c << endl;
	}
	cout << "----------------------\n";

	//завдання 2

	/*const short size = 10;
	int arr[size];
	int* pArr = &arr[0];
	for (short i = 0; i < size; i++)
	{
		*(arr + i) = -9 + rand() % 19;
		cout << *(arr + i) << " ";
	}
	replace(&pArr, size);
	cout << endl;
	for (short i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	cout << "----------------------\n";*/

	//завдання 3

	const short row = 5;
	const short col = 5;
	int arr2[col][row];
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			arr2[i][j] = rand() % (40 - 10) + 10;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "- - - - - - -\n";
	replaceCol(arr2, row, col);;
}