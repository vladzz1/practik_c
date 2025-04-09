#include <iostream>
using namespace std;

struct Boiler
{
	string firm;
	string color;
	short power;
	short amount;
	short temperature;
};

void initBoiler(Boiler& boiler)
{
	cout << "enter the company: ";
	cin >> boiler.firm;
	cout << "enter a color: ";
	cin >> boiler.color;
	cout << "enter power: ";
	cin >> boiler.power;
	cout << "enter the volume: ";
	cin >> boiler.amount;
	cout << "enter the heating temperature: ";
	cin >> boiler.temperature;
}

void printBoiler(const Boiler& boiler)
{
	cout << "firm: " << boiler.firm << endl << "color: " << boiler.color << endl << "power: " << boiler.power << endl;
	cout << "amount: " << boiler.amount << endl << "heating temperature: " << boiler.temperature << endl;
}

void increaseTheTemperature(Boiler& boiler, short temperature)
{	
	if (boiler.temperature + temperature <= 200)
	{
		boiler.temperature += temperature;
	}
	else
	{
		cout << "the boiler temperature cannot be that high\n";
	}
}

void reduceTheTemperature(Boiler& boiler, short temperature)
{
	
	if (boiler.temperature - temperature >= 0)
	{
		boiler.temperature -= temperature;
	}
	else
	{
		cout << "the boiler temperature cannot be that low\n";
	}
}

void comparison(Boiler& boiler, short power)
{
	if (boiler.power > 0)
	{
		if (boiler.power > power)
		{
			cout << "your boiler's capacity is greater\n";
		}
		else if (boiler.power < power)
		{
			cout << "your boiler's capacity is lower\n";
		}
		else
		{
			cout << "the power of your boiler is the same\n";
		}
	}
	else
	{
		cout << "the boiler capacity cannot be that small\n";
	}
}

void main()
{
	Boiler boiler;
	initBoiler(boiler);
	printBoiler(boiler);
	increaseTheTemperature(boiler, 20);
	printBoiler(boiler);
	reduceTheTemperature(boiler, 30);
	printBoiler(boiler);
	comparison(boiler, 45);
}