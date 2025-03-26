#include <iostream>
#include <iomanip>
//#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
//using std::setw;

//void setColor(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//void setPos(int x, int y)
//{
//	COORD c;
//	c.X = x;
//	c.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}

//short len_c(char arr[], short size)
//{
//	short countL = 0;
//	short countN = 0;
//	short countW = 0;
//	for (short i = 0; i < size; i++)
//	{
//		if (isalpha(arr[i]))
//		{
//			countL++;
//		}
//		if (isdigit(arr[i]))
//		{
//			countN++;
//		}
//		if (isspace(arr[i]))
//		{
//			countW++;
//		}
//	}
//	return countL + countN + countW;
//}

void main()
{
	//setw()
	/*cout << "AA" << setw(3) << endl;
	cout << setw(3) << "AA" << endl;
	cout << "B" << endl;
	cout << "C" << endl;
	double x = -5, y = 2.7, z = 1.14;*/
	//cout << left << setw(5) << x << endl;
	/*cout << setw(5) << x << endl;
	cout << setw(5) << y << endl;
	cout << setw(5) << z << endl;

	const short row = 15, col = 20;
	int arr[row][col];
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}*/

	//int a = (int) 2.56;
	/*for (short i = 0; i < 255; i++)
	{
		cout << "code = " << i << " char = " << (char)i << endl;
	}

	setColor(5);
	cout << "hello world\n";
	setColor(2);
	cout << "hello world\n";
	setColor(3);
	cout << "hello world\n";
	setColor(7);
	cout << "hello world\n";*/
	//Sleep(500);
	//system("cls");

	/*char s = 'a';
	cout << s << endl;*/
	//C-style lines
	//string name
	/*char maystring[] = { 'C', 'a', 't', '!', '\0' };
	for (short i = 0; i < 4; i++)
	{
		cout << maystring[i];
	}*/

	//char maystring[] = "string";//string\0
	//cout << maystring << " has " << sizeof(maystring) << " characters " << endl;
	////maystring = "cat"; error
	//maystring[1] = 'p';
	//cout << maystring << endl;
	//int arr[] = { 1, 2, 3, 4 };
	////arr = 7; error
	//char name[15] = "Nax";//3 + \0 = 4
	//cout << "Name = " << name << endl;
	//char myname[255];
	//cout << "Enter name : ";
	//cin.getline(myname, 255);
	//cin >> myname;
	//cout << "Name = " << myname << endl;

	//------------------------------------
	//------------------------------------
	//------------------------------------

	/*char text[] = "print this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << "Original : " << text << endl;
	cout << "Copy : " << copy << endl;
	char name[15] = "Max";
	cout << "Name : " << name << endl;
	cout << "Size" << sizeof(name) << endl;
	cout << "Str lenght" << strlen(name) << endl;

	char arr[255] = "Returns the head of a list";
	cout << arr << endl;
	cout << "Lenght = " << strlen(arr) << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "Copy array : " << endl;
	char arr[255];
	strcpy_s(arr2, arr);
	cout << arr2 << endl;
	arr2[3] = '\0';*/

	//------------------------------------
	//------------------------------------
	//------------------------------------

	const short size = 20;

	//завдання 1

	char arr[size];
	cout << "enter a string\n";
	cin >> arr;
	cin.getline(arr, size);
	short countA = 0;
	short countO = 0;
	for (short i = 0; i < size; i++)
	{
		if (arr[i] == 'a')
		{
			countA++;
		}
		if (arr[i] == 'o')
		{
			countO++;
		}
	}
	if (countA > countO)
	{
		cout << "letters a more\n";
	}
	else if (countA < countO)
	{
		cout << "letters o more\n";
	}
	else
	{
		cout << "the letters a and o have the same number\n";
	}

	//завдання 2

	char arr2[size];
	cout << "enter a string\n";
	cin >> arr2;
	cin.getline(arr2, size);
	short n = strlen(arr2);
	short countLetters = 0;
	short countNumbers = 0;
	short countWhiteOut = 0;
	for (short i = 0; i < n; i++)
	{
		if (isalpha(arr2[i]))
		{
			countLetters++;
		}
		if (isdigit(arr2[i]))
		{
			countNumbers++;
		}
		if (isspace(arr2[i]))
		{
			countWhiteOut++;
		}
	}
	cout << "letters : " << countLetters << endl << "numbers : " << countNumbers << endl << "white space : " << countWhiteOut << endl;

	//завдання 3

	/*char arr3[size];
	cout << "enter a string\n";
	cin >> arr3;
	cin.getline(arr3, size);
	for (short i = 0; i < size; i++)
	{
		if (islower(arr3[i]))
		{
			_strupr_s(arr3, size);
		}
		if (isupper(arr3[i]))
		{
			_strlwr_s(arr3);
		}
	}
	cout << arr3;*/

	//завдання 4

	/*char arr4[size];
	cout << "enter a string\n";
	cin >> arr4;
	cin.getline(arr4, size);
	cout << "string length: " << sizeof(arr4);*/

	//завдання 5

	char arr5[] = "dfjrsjdjdekdjrkt";
	char symbol;
	cout << arr5 << endl;
	cout << "which character to remove?\n";
	cin >> symbol;
	for (short i = 0; i < 16; i++)
	{
		if (arr5[i] == symbol)
		{
			arr5[i] = '?';
		}
	}
	cout << arr5 << endl;
}