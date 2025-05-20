#include <iostream>
#include <windows.h>
using std::cout;

void setPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

class Shape
{
public:
	virtual void printS()const = 0;
};

class Line : public Shape
{
	int x;
	int y;
public:
	Line() :x(0), y(0) {}
	Line(int x, int y) :x(x), y(y) {}
	void printS()const
	{
		setPos(x, y);
		cout << "*";
	}
};

class RectangleR : public Shape
{
	int cornerCoord;
	int width;
	int length;
public:
	RectangleR() :cornerCoord(0), width(0), length(0) {}
	RectangleR(int cornerCoord, int width, int length) :cornerCoord(cornerCoord), width(width), length(length) {}
	void printS()const
	{
		short b(cornerCoord);
		setPos(cornerCoord, b);
		for (short i = 0; i < length; i++)
		{
			for (short j = 0; j < width; j++)
			{
				cout << "* ";
			}
			setPos(cornerCoord, b += 1);
		}
	}
};

struct Point
{
	int x;
	int y;
};

class PolylineP : public Shape
{
	short maxSize;
	Point* points[50];
public:
	PolylineP() :maxSize(0) {}
	void printS()const
	{
		for (short i = 0; i < maxSize; i++)
		{
			setPos(points[i]->x, points[i]->y);
			cout << "*";
		}
	}
	void addPoint(int x, int y)
	{
		points[maxSize]->x = x;
		points[maxSize]->y = y;
		maxSize++;
	}
};

void main()
{
	
}