#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

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