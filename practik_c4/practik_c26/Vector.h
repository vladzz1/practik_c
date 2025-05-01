#pragma once
#include "Point.h"
class Vector
{
	Point* points;
	int countPoint;
public:
	Vector() :points(nullptr), countPoint(0) {}
	Vector(int countPoint) :countPoint(countPoint) {}
	Vector(Vector& other);
	Vector(Vector&& other);
	void addPoint(Point point);
	void printPoints()const;
	Vector& operator =(const Vector& other);
	~Vector()
	{
		if (points != nullptr)
		{
			delete[] points;
		}
	}
};
