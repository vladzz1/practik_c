#include "Point.h"

bool Point::operator >(const Point& other)
{
	if (this->x > other.x && this->y > other.y)
	{
		return true;
	}
	else
	{
		false;
	}
}
bool Point::operator <(const Point& other)
{
	if (this->x < other.x && this->y < other.y)
	{
		return true;
	}
	else
	{
		false;
	}
}
