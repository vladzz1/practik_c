#include <iostream>
#include <string>
//#pragma warning(disable :4996)

using namespace std;

void main()
{
	//ctrl + alt + клік
	//ctrl + shift + v
	//nullptr
	/*char arr[50];
	cout << "enter a string\n";
	cin >> arr;
	cin.getline(arr, 50);
	short sentence = 0;
	for (short i = 0; i < 50; i++)
	{
		if (arr[i] == '.' || arr[i] == '!' || arr[i] == '?')
		{
			sentence++;
		}
	}
	cout << "sentences per line: " << sentence << endl;*/

	//завдання 1

	char c[] { ',' };
	short words;
	char string[200] {};
	cout << "how many words will there be\n";
	cin >> words;
	for (short i = 0; i < words; i++)
	{
		char word[50];
		cout << "enter a word\n";
		cin >> word;
		strcat_s(string, word);
		if (i == words - 1)
		{
			break;
		}
		strcat_s(string, c);
	}
	cout << string << endl;

	//завдання 2

	char string2[50];
	cout << "enter a string\n";
	cin >> string2;
	char symbol;
	cout << "enter a character to search for: ";
	cin >> symbol;
	short count = 0;
	short n = strlen(string2);
	for (short i = 0; i < n; i++)
	{
		if (string2[i] == symbol)
		{
			count++;
		}
	}
	cout << "characters in a line: " << count << endl;

	//завдання 3

	char string3[50];
	cout << "enter a string\n";
	cin >> string3;
	cout << "enter the character you want to replace: ";
	char symbol1;
	char symbol2;
	cin >> symbol1;
	cout << "enter the character to replace: ";
	cin >> symbol2;
	n = strlen(string3);
	for (short i = 0; i < n; i++)
	{
		if (string3[i] == symbol1)
		{
			string3[i] = symbol2;
		}
	}
	cout << string3;
}