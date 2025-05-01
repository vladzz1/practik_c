#pragma once
#include <iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point() :x(0), y(0) {}
	Point(int x, int y) :x(x), y(y) {}
	void printPoint()const
	{
		cout << "x: " << x << endl << "y: " << y << endl;
	}
	void operator ++()
	{
		x++, y++;
	}
	void operator ++(int)
	{
		x++, y++;
	}
	void operator --()
	{
		x--, y--;
	}
	void operator --(int)
	{
		x--, y--;
	}
	bool operator >(const Point& other);
	bool operator <(const Point& other);
	void operator !()
	{
		!x, !y;
	}

};


