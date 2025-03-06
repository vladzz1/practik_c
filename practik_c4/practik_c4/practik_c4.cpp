#include<iostream>
using namespace std;

void main()
{
	//завдання 1

	char key;
	short n = 7;
	cout << "select a letter\n";
	cout << "[a] [b] [c] [d] [f] [e] [g] [h] [i] [j]\n";
	cin >> key;
	switch (key)
	{
	case 'a':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i <= j)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'b':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i >= j)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'c':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i <= j && i + j <= n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'd':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i > j && i + j > n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'f':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i <= j && i + j <= n - 1 || i > j && i + j > n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'e':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i < j && i + j > n - 1 || i >= j && i + j <= n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'g':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i >= j && i + j <= n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'h':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i < j && i + j > n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'i':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i + j <= n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'j':
		for (short i = 0; i <= n; i++)
		{
			for (short j = 0; j <= n; j++)
			{
				if (i + j > n - 1)
				{
					cout << " *";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	default:
		cout << "the letter " << key << " is not in the list";
		break;
	}

	//завдання 3

	cout << "enter the size of the chessboard: ";
	cin >> n;
	for (short i = 0; i < n; i++)
	{
		for (short i = 0; i < n; i++)
		{
			cout << "***___";
		}
		cout << endl;
	}
}