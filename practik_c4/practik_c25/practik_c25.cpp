#include <iostream>
#include <windows.h>
using namespace std;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class Airplane
{
	string model;
	string type;
	int numberOfPassengers;
	int maximumAmount;
public:
	Airplane() :model("no data"), type("no data"), numberOfPassengers(0), maximumAmount(0) {};
	Airplane(string model, string type, int numberOfPassengers, int maximumAmount)
	{
		this->model = model;
		this->type = type;
		this->numberOfPassengers = numberOfPassengers;
		this->maximumAmount = maximumAmount;
	}
	void printAirplane()const
	{
		cout << "model: " << model << endl;
		cout << "type: " << type << endl;
		cout << "number of passengers: " << numberOfPassengers << endl;
		cout << "maximum amount: " << maximumAmount << endl;
	}
	friend bool operator ==(const Airplane a, const Airplane b);
	friend Airplane operator ++(Airplane& a);
	friend Airplane operator ++(Airplane& a, int);
	friend Airplane operator --(Airplane& a);
	friend Airplane operator --(Airplane& a, int);
	friend bool operator >(const Airplane a, const Airplane b);
	friend bool operator <(const Airplane a, const Airplane b);
	Airplane operator ()(int count)
	{
		if (this->numberOfPassengers + count <= this->maximumAmount)
		{
			this->numberOfPassengers += count;
			return *this;
		}
		else
		{
			setColor(4);
			cout << "little space\n";
			setColor(7);
		}
	}
};

bool operator ==(const Airplane a, const Airplane b)
{
	if (a.type == b.type)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Airplane operator ++(Airplane& a)
{
	if (a.numberOfPassengers < a.maximumAmount)
	{
		a.numberOfPassengers++;
		return a;
	}
	else
	{
		setColor(4);
		cout << "little space\n";
		setColor(7);
	}
}
Airplane operator ++(Airplane& a, int)
{
	if (a.numberOfPassengers < a.maximumAmount)
	{
		a.numberOfPassengers++;
		return a;
	}
	else
	{
		setColor(4);
		cout << "little space\n";
		setColor(7);
	}
}
Airplane operator --(Airplane& a)
{
	if (a.numberOfPassengers > 0)
	{
		a.numberOfPassengers--;
		return a;
	}
	else
	{
		setColor(4);
		cout << "There is no one on the plane\n";
		setColor(7);
	}
}
Airplane operator --(Airplane& a, int)
{
	if (a.numberOfPassengers > 0)
	{
		a.numberOfPassengers--;
		return a;
	}
	else
	{
		setColor(4);
		cout << "There is no one on the plane\n";
		setColor(7);
	}
}
bool operator >(const Airplane a, const Airplane b)
{
	if (a.maximumAmount > b.maximumAmount)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator <(const Airplane a, const Airplane b)
{
	if (a.maximumAmount < b.maximumAmount)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void main()
{

}