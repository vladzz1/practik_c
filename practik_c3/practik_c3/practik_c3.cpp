#include<iostream>
using namespace std;

void main()
{
	//завдання 1

	short i = 1;
	while (i < 101)
	{
		cout << i << endl;
		i++;
	}
	cout << "-----------------\n";

	//завдання 2

	i = 1;
	while (i < 201)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
		i++;
	}
	cout << "-----------------\n";

	//завдання 3

	short n;
	short number;
	short summa = 0;
	cout << "enter how many numbers you want to enter: ";
	cin >> n;
	i = 1;
	while (i <= n)
	{
		cout << "enter " << i << " number: ";
		cin >> number;
		if (number % 2 == 0)
		{
			summa += number;
		}
		i++;
	}
	cout << "sum of even number = " << summa << endl;
	cout << "-----------------\n";

	//завдання 4

	short number2;
	summa = 0;
	i = 1;
	while (i < 11)
	{
		cout << "enter " << i << " numeric: ";
		cin >> number2;
		summa += number2;
		i++;
	}
	short amount = summa / 10;
	cout << "summa = " << summa << endl;
	cout << "amount = " << amount << endl;
	cout << "-----------------\n";

	//завдання 5
	
	i = 100;
	do
	{
		if (i == 0)
		{
			break;
		}
		cout << i << endl;
		i--;
	} while (true);
	cout << "------------------\n";

	//завдання 6
	
	short number3;
	summa = 0;
	i = 1;
	do
	{
		if (i == 8)
		{
			break;
		}
		cout << "enter " << i << " numeric: ";
		cin >> number3;
		summa += number3;
		i++;
	} while (true);
	cout << "summa = " << summa << endl;
	cout << "------------------\n";
	
	//додаткове завдання 1

	short key;
	cout << "[1] - Germany\n";
	cout << "[2] - France\n";
	cout << "[3] - Switzerland\n";
	cout << "[4] - Greenland\n";
	cout << "[5] - India\n";
	cout << "enter the country number: ";
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "Berlin\n";
		break;

	case 2:
		cout << "Paris\n";
		break;

	case 3:
		cout << "Burn\n";
		break;

	case 4:
		cout << "Nyyk\n";
		break;

	case 5:
		cout << "New Delhi\n";
		break;

		
	default:
		cout << "I don't understand the capital of which country to show you\n";
		break;
	}
	cout << "------------------\n";

	//додаткове завдання 2

	short key2;
	cout << "enter the day of the week number: ";
	cin >> key2;
	switch (key2)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "it's a weekday\n";
		break;

	case 6:
	case 7:
		cout << "it's a day off\n";
		break;

		
	default:
		cout << "there is no such day of the week\n";
		break;
	}
	cout << "------------------\n";

	//додаткове завдання 3
	
	short key3;
	cout << "[1] - North\n";
	cout << "[2] - South\n";
	cout << "[3] - West\n";
	cout << "[4] - East\n";
	cout << "enter the ship's direction of travel: ";
	cin >> key3;
	switch (key3)
	{
	case 1:
		cout << "South\n";
		break;

	case 2:
		cout << "North\n";
		break;

	case 3:
		cout << "East\n";
		break;

	case 4:
		cout << "West\n";
		break;
		
	default:
		cout << "there is no such direction\n";
		break;
	}
	cout << "------------------\n";

	//додаткове завдання 4
	
	short key4;
	cout << "[1] - giraffe\n";
	cout << "[2] - eagle\n";
	cout << "[3] - rhinoceros\n";
	cout << "[4] - lion\n";
	cout << "[5] - behemoth\n";
	cout << "[6] - cheetah\n";
	cout << "[7] - leopard\n";
	cout << "enter the number of the animal: ";
	cin >> key4;
	switch (key4)
	{
	case 1:
	case 3:
	case 5:
		cout << "a herbivorous animal\n";
		break;

	case 2:
	case 4:
	case 6:
	case 7:
		cout << "predatory animal\n";
		break;
		
	default:
		cout << "No number listed " << key4 << endl;
		break;
	}
}