#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//--------------------------

int binarySearch(short key, int arr[], short size)
{
	short left = 0;
	short right = size - 1;
	short mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

//--------------------------

void main()
{
	const short size = 10;
	short key;
	int arr[10] = { 2, 3, 6, 12, 15, 21, 23, 25, 32, 34 };
	cout << "Enter key: ";
	cin >> key;
	cout << "index element: " << binarySearch(key, arr, size) << endl;
}