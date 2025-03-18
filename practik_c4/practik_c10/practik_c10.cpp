#include <iostream>
using std::cout;
using std::endl;

void main()
{
	srand(time(0));
	short a = 10;
	short b = 6;
	short c = 2;
	cout << "variables\n";
	cout << "a * b * c = " << a * b * c << endl;
	cout << "(a + b + c) / 2 = " << (a + b + c) / 2 << endl;
	if (a < b && a < c)
	{
		cout << "minimum number: " << a << endl;
	}
	else if (b < a && b < c)
	{
		cout << "minimum number: " << b << endl;
	}
	else
	{
		cout << "minimum number: " << c << endl;
	}
	//--------------------
	const short size = 10;
	short summa = 0;
	int arr[size];
	for (short i = 0; i < size; i++)
	{
		arr[i] = rand() % (40 - 10) + 10;
		cout << arr[i] << " ";
		summa += arr[i];
	}
	cout << endl;
	for (short i = size - 1; i > -1; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "summa number: " << summa << endl;
	//--------------------
	short max = arr[0];
	short min = arr[0];
	for (short i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (short i = 0; i < size; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		else if (arr[i] == min)
		{
			arr[i] = max;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
	//--------------------
	for (short i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			 cout << arr[i + 1] << " ";
		}
		else if (i % 2 != 0)
		{
			cout << arr[i - 1] << " ";
		}
	}
	cout << endl;

	//завдання 1

	short* p_a = &a;
	short* p_b = &b;
	short* p_c = &c;
	cout << "pointers\n";
	cout << "*p_a * *p_b * *p_c = " << *p_a * *p_b * *p_c << endl;
	cout << "(*p_a + *p_b + *p_c) / 2 = " << (*p_a + *p_b + *p_c) / 2 << endl;
	if (*p_a < *p_b && *p_a < *p_c)
	{
		cout << "minimum number: " << *p_a << endl;
	}
	else if (*p_b < *p_a && *p_b < *p_c)
	{
		cout << "minimum number: " << *p_b << endl;
	}
	else
	{
		cout << "minimum number: " << *p_c << endl;
	}

	//завдання 2

	summa = 0;
	int* p_arr = &arr[0];
	for (short i = 0; i < size; i++)
	{
		cout << *(p_arr + i) << " ";
		summa += *(p_arr + i);
	}
	cout << endl;
	for (short i = size - 1; i > -1; i--)
	{
		cout << *(p_arr + i) << " ";
	}
	cout << endl;
	cout << "summa number: " << summa << endl;

	//завдання 3

	max = *p_arr;
	min = *p_arr;
	for (short i = 0; i < size; i++)
	{
		if (*(p_arr + i) > max)
		{
			max = *(p_arr + i);
		}
		if (*(p_arr + i) < min)
		{
			min = *(p_arr + i);
		}
	}
	for (short i = 0; i < size; i++)
	{
		if (*(p_arr + i) == max)
		{
			*(p_arr + i) = min;
		}
		else if (*(p_arr + i) == min)
		{
			*(p_arr + i) = max;
		}
		cout << *(p_arr + i) << " ";
	}
	cout << endl;

	//завдання 4

	for (short i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			cout << *(p_arr + i + 1) << " ";
		}
		else if (i % 2 != 0)
		{
			cout << *(p_arr + i - 1) << " ";
		}
	}
	cout << endl;
}