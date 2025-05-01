#include "Vector.h"

Vector::Vector(Vector& other)
{
	this->countPoint = other.countPoint;
	for (short i = 0; i < countPoint; i++)
	{
		this->points[i] = other.points[i];
	}
}
Vector::Vector(Vector&& other)
{
	this->countPoint = other.countPoint;
	this->points = other.points;
	other.points = nullptr;
}
void Vector::addPoint(Point point)
{
	countPoint++;
	Point* temp = new Point[countPoint];
	for (short i = 0; i < countPoint - 1; i++)
	{
		temp[i] = points[i];
	}
	temp[countPoint - 1] = point;
	if (points != nullptr)
	{
		delete[] points;
	}
	points = temp;
}
void Vector::printPoints() const
{
	cout << "count point: " << countPoint << endl;
	for (short i = 0; i < countPoint; i++)
	{
		points[i].printPoint();
	}
}
Vector& Vector::operator=(const Vector& other)
{
	this->countPoint = other.countPoint;
	if (points != nullptr)
	{
		delete[] points;
	}
	this->points = new Point[countPoint];
	for (short i = 0; i < countPoint; i++)
	{
		this->points[i] = other.points[i];
	}
	return *this;
}
