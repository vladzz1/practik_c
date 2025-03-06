#include <iostream>
using namespace std;

void main()
{
	//завдання 1

	short n;
	short x = 0;
	short y = 0;
	cout << "enter n quantity: ";
	cin >> n;
	for (short i = 0; i < 3; i++)
	{
		x += n;
		y++;
		for (short i = 0; i < x; i++)
		{
			cout << y << " ";
		}
		cout << endl;
	}
	cout << "--------------------\n";

	//завдання 2

	n = 10;
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < n; j++)
		{
			if (i == j || i + j == n - 1)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		cout << endl;
	}
	cout << "--------------------\n";

	//завдання 3

	short summa = 0;
	y = 10;
	for (short i = 0; i < 9; i++)
	{
		n--;
		y--;
		for (short i = 0; i < n; i++)
		{
			cout << y << " ";
			summa += y;
		}
		cout << endl;
	}
	cout << "sum of all numbers: " << summa << endl;
	cout << "--------------------\n";

	//завдання 4

	n = 15;
	for (short i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			y = i;
			for (short i = 0; i < 8; i++)
			{
				cout << y << " ";
			}
			cout << endl;
		}
		else
		{
			for (short i = 0; i < 10; i++)
			{
				cout << "1 ";
			}
			cout << endl;
		}
		
	}
	cout << "--------------------\n";

	//завдання 5

	n = 30;
	for (short i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (short i = 0; i < 5; i++)
			{
				cout << "1 ";
			}
			cout << endl;
		}
		else
		{
			x = i - 4;
			y = 1;
			for (short i = 0; i < x; i++)
			{
				cout << y << " ";
				y++;
			}
			cout << endl;
		}

	}
	cout << "--------------------\n";

	//завдання 6

	n = 10;
	y = 0;
	for (short i = 0; i < n; i++)
	{
		y++;
		for (short i = 1; i < n; i++)
		{
			cout << y << " * " << i << " = " << i * y << endl;
		}
		cout << "- - - - - -\n";
	}
	cout << "--------------------\n";

	//завдання 7

	n = 50;
	short number = 0;
	for (short i = 0; i < n; i++)
	{
		if (i % 12 == 0)
		{
			number++;
		}
	}
	cout << "the number of numbers divisible by 12: " << number << endl;
	cout << "--------------------\n";

	//завдання 8

	int arr[12];
	for (short i = 1; i < 13; i++)
	{
		cout << "enter the firm's profit for " << i << " month: ";
		cin >> arr[i - 1];
	}
	short a;
	short b;
	cout << "enter the start of the range: ";
	cin >> a;
	cout << "enter the end of the range: ";
	cin >> b;
	int maxProfit = arr[a];
	int minProfit = arr[a];
	for (short i = a; i <= b; i++)
	{
		if (arr[i] > maxProfit)
		{
			maxProfit = arr[i];
		}
		if (arr[i] < minProfit)
		{
			minProfit = arr[i];
		}
	}
	cout << "maximum profit: " << maxProfit << endl;
	cout << "minimum profit: " << minProfit << endl;
}