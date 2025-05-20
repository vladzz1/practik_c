#include <iostream>
#include <windows.h>
using std::cout; using std::endl; using std::cin;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//class Car
//{
//public:
//	void drive()
//	{
//		cout << "i can drive.\n";
//	}
//	void use()
//	{
//		cout << "i can drive.\n";
//	}
//};
//
//class Airplane
//{
//public:
//	void fly()
//	{
//		cout << "i can fly.\n";
//	}
//	void use()
//	{
//		cout << "i can drive.\n";
//	}
//};
//
//class flyCar : public Car, public Airplane
//{
//
//};

//----------------------------------
//----------------------------------
//----------------------------------

class Pizza
{
public:
	virtual void makePizza() = 0;
};

class MilanPizza : public Pizza
{
public:
	void makePizza()override
	{
		cout << "\tI am making Milanese pizza\n";
	}
};

class GreekPizza : public Pizza
{
public:
	void makePizza()override
	{
		cout << "\tI am making Greek pizza\n";
	}
};

class Sauce
{
public:
	virtual void makeSauce() = 0;
};

class MilanSauce : public Sauce
{
public:
	void makeSauce()override
	{
		cout << "\tI am making Milanese sauce\n";
	}
};

class GreekSauce : public Sauce
{
public:
	void makeSauce()override
	{
		cout << "\tI am making Greek sauce\n";
	}
};

class Factory
{
public:
	virtual Pizza* createPizza() = 0;
	virtual Sauce* createSauce() = 0;
};

class MilanFactory : public Factory
{
	Pizza* createPizza()override
	{
		return new MilanPizza();
	}
	Sauce* createSauce()override
	{
		return new MilanSauce();
	}
};

class GreekFactory : public Factory
{
	Pizza* createPizza()override
	{
		return new GreekPizza();
	}
	Sauce* createSauce()override
	{
		return new GreekSauce();
	}
};

short main()
{
	while (true)
	{
		cout << "\tenter\n";
		cout << "\t1. to make Milanese pizza and sauce\n";
		cout << "\t2. to make Greek pizza and sauce\n";
		cout << "\t0. exit\n";
		cout << "\tWhat do you want to do?\n\t";
		short key;
		cin >> key;
		switch (key)
		{
		case 0:
			return 0;
		case 1:
			Factory* factory = new MilanFactory();
			Pizza* pizza = factory->createPizza();
			pizza->makePizza();
			Sauce* sauce = factory->createSauce();
			sauce->makeSauce();
			delete factory;
			delete pizza;
			delete sauce;
			break;
		case 2:
			factory = new GreekFactory();
			pizza = factory->createPizza();
			pizza->makePizza();
			sauce = factory->createSauce();
			sauce->makeSauce();
			delete factory;
			delete pizza;
			delete sauce;
			break;
		default:
			setColor(4);
			cout << "error: there is no \"" << key << "\" in the menu\n";
			setColor(7);
			break;
		}
	}
}