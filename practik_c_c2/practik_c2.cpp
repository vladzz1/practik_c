#include<iostream>
using namespace std;

void main()
{
	//завдання 1

	float side1;
	float side2;
	float side3;
	float side4;
	cout << "enter the sides of the rectangle\n";
	cin >> side1;
	cin >> side2;
	cin >> side3;
	cin >> side4;
	if (side1 == side2 && side2 == side3 && side3 == side4 && side4 == side1)
	{
		cout << "a rectangle is a square\n";
	}
	else
	{
		cout << "a rectangle is not a square\n";
	}

	//завдання 2

	short age;
	cout << "enter age\n";
	cin >> age;
	if (age > 0 && age < 7)
	{
		cout << "you go to kindergarten";
	}
	else if (age > 6 && age < 17)
	{
		cout << "you go to school";
	}
	else if (age > 16 && age < 23)
	{
		cout << "you go to the academy\n";
	}
	else if (age > 22 && age < 56)
	{
		cout << "you go to work\n";
	}
	else if (age > 55 && age < 121)
	{
		cout << "you are retired\n";
	}
	else
	{
		cout << "error age\n";
	}

	//завдання 3

	short numeric1;
	short numeric2;
	short numeric3;
	cout << "enter three numbers\n";
	cin >> numeric1;
	cin >> numeric2;
	cin >> numeric3;
	if (numeric1 < 0 && numeric2 < 0 || numeric2 < 0 && numeric3 < 0 || numeric3 < 0 && numeric1 < 0)
	{
		cout << "two numbers are exactly subtractive\n";
	}
	else if (numeric1 > -1 && numeric2 > -1 && numeric3 > -1)
	{
		cout << "all numbers are positive\n";
	}
	else
	{
		cout << "there are positive numbers here\n";
	}

	//завдання 4

	short numeric;
	cout << "enter numeric\n";
	cin >> numeric;
	if (numeric > 1 && numeric < 6)
	{
		cout << "the number lies in the range [2, 5]\n";
	}
	else if (numeric > -2 && numeric < 2)
	{
		cout << "the number lies in the range [-1, 1]\n";
	}
	else
	{
		cout << "the number does not lie in any of the segments\n";
	}

	//завдання 5

	cout << "enter three numbers\n";
	cin >> numeric1;
	cin >> numeric2;
	cin >> numeric3;
	if (numeric1 == numeric2 && numeric2 == numeric3 && numeric3 == numeric1)
	{
		cout << "all numbers are the same\n";
	}
	else if (numeric1 == numeric2 || numeric2 == numeric3 || numeric3 == numeric1)
	{
		cout << "the two numbers are exactly the same\n";
	}
	else
	{
		cout << "there are no identical numbers here\n";
	}

	//завдання 6
	
	cout << "enter three numbers\n";
	cin >> numeric1;
	cin >> numeric2;
	cin >> numeric3;
	if (numeric1 % 2 != 0 && numeric2 % 2 != 0 && numeric3 % 2 != 0)
	{
		cout << "all numbers are not even\n";
	}
	else if (numeric1 % 2 == 0 && numeric2 % 2 == 0 && numeric3 % 2 == 0)
	{
		cout << "all numbers are even\n";
	}
	else
	{
		cout << "there are even and odd numbers here\n";
	}

	//додаткове завдання

	short hour;
	cout << "enter the hour of the day\n";
	cin >> hour;
	if (hour > 0 && hour < 5)
	{
		cout << "good night\n";
	}
	else if (hour > 4 && hour < 11)
	{
		cout << "good morning\n";
	}
	else if (hour > 10 && hour < 18)
	{
		cout << "good day\n";
	}
	else if (hour > 17 && hour < 22)
	{
		cout << "good evening\n";
	}
	else if (hour > 21 && hour < 25)
	{
		cout << "good night\n";
	}
	else
	{
		cout << "there is no such hour of the day\n";
	}
}