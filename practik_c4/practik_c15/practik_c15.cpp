#include <iostream>
using namespace std;

int** createMatrix(int row, int col)
{
	int** matrix = new int* [row];
	for (short i = 0; i < row; i++)
	{
		matrix[i] = new int[col] {};
	}
	return matrix;
}

void fillMatrix(int**& matrix, int row, int col)
{
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			matrix[i][j] = rand() % (40 - 10) + 10;
		}
	}
}

void printMatrix(int** matrix, int row, int& col)
{
	for (short i = 0; i < col; i++)
	{
		for (short j = 0; j < row; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void addNewRow(int**& matrix, int row, int& col, int newRow[])
{
	col++;
	int** temp = new int* [col];
	for (short i = 1; i < col; i++)
	{
		temp[i] = matrix[i - 1];
	}
	temp[0] = newRow;
	delete[] matrix;
	matrix = temp;
}

void deleteIndexRow(int**& matrix, int row, int& col, int index)
{
	int** temp = new int* [col];
	for (short i = 0; i < col - 1; i++)
	{
		if (i < index)
		{
			temp[i] = matrix[i];
		}
		if (i >= index)
		{
			temp[i] = matrix[i + 1];
		}
	}
	col--;
	delete[] matrix;
	matrix = temp;
}

void addIndexRow(int**& matrix, int row, int& col, int index, int newRow[])
{
	col++;
	int** temp = new int* [col];
	for (short i = 0; i < col - 1; i++)
	{
		if (i < index)
		{
			temp[i] = matrix[i];
		}
		if (i >= index)
		{
			temp[i] = matrix[i - 1];
		}
	}
	temp[col - 1] = matrix[col - 2];
	temp[index] = newRow;
	delete[] matrix;
	matrix = temp;
}

void main()
{
	srand(time(0));
	int row = 5;
	int col = 5;
	int** matrix = createMatrix(row, col);
	fillMatrix(matrix, row, col);
	printMatrix(matrix, row, col);
	cout << "--------------\n";
	int arr[]{ 12, 34, 24, 42, 22 };
	addNewRow(matrix, row, col, arr);
	printMatrix(matrix, row, col);
	cout << "--------------\n";
	cout << "enter the index of the element you want to delete: ";
	int index;
	cin >> index;
	deleteIndexRow(matrix, row, col, index);
	printMatrix(matrix, row, col);
	cout << "--------------\n";
	int arr2[]{ 23, 25, 21, 31, 14 };
	cout << "enter the index of the element where you want to insert the element: ";
	cin >> index;
	addIndexRow(matrix, row, col, index, arr2);
	printMatrix(matrix, row, col);
}