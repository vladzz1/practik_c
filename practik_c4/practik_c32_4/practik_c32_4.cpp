#include <iostream>
using std::cout; using std::endl; using std::string;

class Animal
{
protected:
	string view;
	short speed;
	short weight;
	string habitat;
public:
	Animal() :view("no data"), speed(0), weight(0), habitat("no data") {}
	Animal(string view, short speed, short weight, string habitat) :view(view), speed(speed), weight(weight), habitat(habitat) {}
	void move()
	{

	}
	void show()
	{
		cout << "view: " << view << endl;
		cout << "speed: " << speed << endl;
		cout << "weight: " << weight << endl;
		cout << "habitat: " << habitat << endl;
	}
	void say()
	{

	}
};

class Bird : Animal
{
	short wingspan;
public:
	Bird() :wingspan(0), Animal() {}
	Bird(short wingspan) :wingspan(wingspan), Animal(view, speed, weight, habitat) {}
	void show()
	{
		Animal::show();
		cout << "wingspan: " << wingspan << endl;
	}
};

class Reptile : Animal
{
	short size;
public:
	Reptile() :size(0), Animal() {}
	Reptile(short size) :size(size), Animal(view, speed, weight, habitat) {}
	void show()
	{
		Animal::show();
		cout << "size: " << size << endl;
	}
};

class Fish : Animal
{
	string color;
public:
	Fish() :color("no data"), Animal() {}
	Fish(string color) :color(color), Animal(view, speed, weight, habitat) {}
	void show()
	{
		Animal::show();
		cout << "color: " << color << endl;
	}
};

void main()
{

}