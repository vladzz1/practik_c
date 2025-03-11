#include <iostream>
using namespace std;

//- - - - - - - - - - - - - - - - - -

void rectangle(short n, short k)
{
	for (short i = 0; i < n; i++)
	{
		for (short i = 0; i < k; i++)
		{
			cout << " *";
		}
		cout << endl;
	}
}

//- - - - - - - - - - - - - - - - - -

int factorial(int numeric)
{
	int a = 1;
	for (short i = 1; i <= numeric; i++)
	{
		a *= i;
	}
	return a;
}

//- - - - - - - - - - - - - - - - - -

int primeNumber(int numeric)
{
	for (short i = 2; i < numeric / 2; i++)
	{
		if (numeric % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

//- - - - - - - - - - - - - - - - - -

int cubeNumber(int numeric)
{
	short cube = numeric;
	for (short i = 0; i < 2; i++)
	{
		numeric *= cube;
	}
	return numeric;
}

//- - - - - - - - - - - - - - - - - -

int maxNumber(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

//- - - - - - - - - - - - - - - - - -

bool numberFilter(int numeric)
{
	if (numeric > -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//- - - - - - - - - - - - - - - - - -

void maxMinElement(int arr[])
{
	short maxElem = arr[0];
	short minElem = arr[0];
	for (short i = 0; i < 10; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
		}
		if (arr[i] < minElem)
		{
			minElem = arr[i];
		}
	}
	cout << "maximum element: " << maxElem << endl;
	cout << "minimal element: " << minElem << endl;
}

//- - - - - - - - - - - - - - - - - -

void change(int arr[])
{
	for (short i = 9; i > -1; i--)
	{
		cout << arr[i] << " ";
	}
}

//- - - - - - - - - - - - - - - - - -

int numberOfPrime(int arr[])
{
	short summa = 0;
	for (short i = 0; i < 10; i++)
	{
		for (short j = 2; j < arr[i] / 2; j++)
		{
			if (arr[i] % j == 0)
			{
				break;
			}
			summa++;
			break;
		}
	}
	return summa;
}

//- - - - - - - - - - - - - - - - - -

void main()
{
	srand(time(0));

	//завдання 1

	rectangle(5, 10);
	cout << "---------------------\n";

	//завдання 2

	cout << "factorial: " << factorial(5) << endl;
	cout << "---------------------\n";

	//завдання 3

	primeNumber(45) == 0 ? cout << "the number is not prime" << endl : cout << "the number is prime" << endl;
	cout << "---------------------\n";

	//завдання 4

	cout << "cube of a number: " << cubeNumber(3) << endl;
	cout << "---------------------\n";

	//завдання 5

	cout << "the maximum number: " << maxNumber(2, 4) << endl;
	cout << "---------------------\n";

	//завдання 6

	if (numberFilter(5) == 1)
	{
		cout << "the number is positive: true\n";
	}
	else
	{
		cout << "the number is positive: folse\n";
	}
	cout << "---------------------\n";

	//додаткове завдання 1

	const short size = 10;
	int arr[size];
	for (short i = 0; i < size; i++)
	{
		arr[i] = rand() % (40 - 10) + 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	maxMinElement(arr);
	cout << "---------------------\n";

	//додаткове завдання 2

	change(arr);
	cout << endl;
	cout << "---------------------\n";

	//додаткове завдання 3

	cout << "prime numbers in the list: " << numberOfPrime(arr) << endl;
}