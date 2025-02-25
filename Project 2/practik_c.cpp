#include<iostream>

using namespace std;

void main()
{
	//1
	cout << "I\n\tLove\n\t\tyou\n\t\t\tC++!\n------------------------------------\n";
	//2
	cout << "\t...:::RESUME:::...\n\n";
	cout << "Name:\t\t\tVladyslav\n";
	cout << "Surname:\t\tVynohrodskiy\n";
	cout << "Last name:\t\tMykhailovych\n\n";
	cout << "Date of birth:\t\t11.11.06\n";
	cout << "City:\t\t\tRivne\n";
	cout << "Age:\t\t\t18\n\n";
	cout << "Hobby:\t\t\tC++\n";
	cout << "::................................::\n------------------------------------\n";
	//3
	short diagonal;
	cout << "enter diagonal TV in inches: ";
	cin >> diagonal;
	cout << "diagonal TV in centimeters: " << diagonal * 2.54;
	//4
	float feed;
	cout << "\nFeed consumption for 1 day (gr): ";
	cin >> feed;
	cout << "Feed volume for 30 days (kg): " << feed * 30 / 1000;
}