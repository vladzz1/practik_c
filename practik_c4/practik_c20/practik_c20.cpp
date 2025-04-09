#include <iostream>
#include <windows.h>
using namespace std;

void setPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

struct Coord
{
	int x;
	int y;
};

class MyRectangle
{
	int width;
	int height;
	char symbol;
	Coord coord;
public:
	MyRectangle()
	{
		width = 7;
		height = 7;
		symbol = '*';
		coord.x = 0;
		coord.y = 0;
	}
	MyRectangle(int size)
	{
		width = size;
		height = size;
		symbol = '*';
		coord.x = 0;
		coord.y = 0;
	}
	MyRectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
		symbol = '*';
		coord.x = 0;
		coord.y = 0;
	}
	void printRectangle()
	{
		for (short i = 0; i < height; i++)
		{
			setPos(coord.x, coord.y + i);
			for (short j = 0; j < width; j++)
			{
				//setPos(coord.x + j, coord.y + i);
				cout << symbol << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	void resizing(int height, int width)
	{
		this->height = height;
		this->width = width;
	}

	void changeCoordinates(int x, int y)
	{
		if (x >= 0 && y >= 0)
		{
			coord.x = x;
			coord.y = y;
		}
		else
		{
			cout << "coordinates must be positive\n";
		}
	}
};

void main()
{
	MyRectangle myRectangle;
	myRectangle.printRectangle();
	myRectangle.resizing(12, 5);
	myRectangle.changeCoordinates(5, 10);
	Sleep(5000);
	system("cls");
	myRectangle.printRectangle();
}