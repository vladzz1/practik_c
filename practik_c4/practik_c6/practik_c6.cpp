#include <iostream>
using namespace std;

void main()
{
	/*srand(time(NULL));
	int a;
	a = rand();
	cout << "a = " << a << endl;

	a = rand();
	cout << "a = " << a << endl;

	a = rand() % 100;
	cout << "a = " << a << endl;

	a = rand() % (20 - 10) + 10;
	cout << "a = " << a << endl;

	const short size = 10;
	int arr[size];
	for (short i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;*/

	/*const short row = 5;
	const short col = 6;
	int arr[row][col];

	int arr2[2][2] = { {1,2},{3,4} };
	int arr3[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}*/
	/*------------------------------------
	--------------------------------------
	-------------------------------------*/

	srand(time(0));
	char key;
	const short n = 5;
	short max;
	int arr[n][n];
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < n; j++)
		{
			arr[i][j] = rand() % (40 - 10) + 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "select a letter\n";
	cout << "[a] [b] [c] [d] [f] [e] [g] [h] [i] [j]\n";
	cin >> key;
	switch (key)
	{
	case 'a':
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i <= j)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
		break;
	case 'b':
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i >= j)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
		break;
	case 'c':
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i <= j && i + j <= n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i > j && i + j > n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i <= j && i + j <= n - 1 || i > j && i + j > n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i < j && i + j > n - 1 || i >= j && i + j <= n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i >= j && i + j <= n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i < j && i + j > n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i + j <= n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
		break;
	case 'j':
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i + j >= n - 1)
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
		max = arr[0][0];
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
			{
				if (i + j >= n - 1)
				{
					if (arr[i][j] > max)
					{
						max = arr[i][j];
					}
				}
			}
		}
		cout << "maximum number in the specified area: " << max << endl;
		break;
	default:
		cout << "the letter " << key << " is not in the list";
		break;
	}
}