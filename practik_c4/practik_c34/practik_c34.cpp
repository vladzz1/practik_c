#include <iostream>
using namespace std;

class Animal
{
	string name;
	string type;
	int age;
	float weight;
public:
	Animal() :name("no data"), type("no data"), age(0), weight(0) {}
	Animal(string name, string type, int age, float weight) :name(name), type(type), age(age), weight(weight) {}
	void show()const
	{
		cout << "Name: " << name << endl;
		cout << "Type: " << type << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
	}
	virtual void move()const
	{
		cout << "i am moving..............\n";
	}
	virtual void say()const = 0
	{

	}
};

class Lion : public Animal
{
	float runSpeed;
public:
	Lion() :runSpeed(0), Animal() {}
	Lion(string name, string type, int age, float weight, float runSpeed) :runSpeed(runSpeed), Animal(name, type, age, weight) {}
	void say()const override
	{
		cout << "rrrrrr-rrrrrrr-rrrrrr-rrrrrrr-rrrrrr\n";
	}
	void move()const override
	{
		cout << "i am running with speed: " << runSpeed << "km/h\n";
	}
};

class Antilopa : public Animal
{
	float runSpeed;
	bool horns;
public:
	Antilopa() :runSpeed(0), horns(0) {}
	Antilopa(string name, string type, int age, float weight, float runSpeed, bool horns) :runSpeed(runSpeed), horns(horns), Animal(name, type, age, weight) {}
	void say()const override
	{
		cout << "myaaaaaaaaaaaaaaaaaaa\n";
	}
	void move()const override
	{
		cout << "i am running with speed: " << runSpeed << "km/h\n";
	}
};

class Reptile : public Animal
{
	float depth;
public:
	Reptile() :depth(0), Animal() {}
	Reptile(string name, string type, int age, float weight, float depth) :depth(depth), Animal(name, type, age, weight) {}
	void move()const override
	{
		cout << "i am cravling and swimming up to the: " << depth << "m\n";
	}
};

class Frog : public Reptile
{
public:
	Frog(string name, string type, int age, float weight, float depth) :Reptile(name, type, age, weight, depth) {}
	void say()const override
	{
		cout << "kva-kva-kva-kva-kva\n";
	}
};

//class Dolphin : public Animal
//{
//	float depth;
//public:
//	Dolphin()
//};

void rollCall(Animal* animal)
{
	animal->move();
	animal->say();
	animal->show();
}

void main()
{
	Frog f("grisha", "reptile", 10, 0.333, 5);
	f.say();
	f.move();
	//Animal a;
	//a.show();
	//a.move();
	//a.say();

	Lion l("simba", "predator", 42, 150, 75);
	l.show();
	l.say();
	l.move();

	Antilopa ant("gnu", "herbivorous", 28, 200, 100, 1);
	ant.move();

	cout << "---------------------\n";
	Animal* zoo[3]
	{
		&f, &l, &ant
	};

	rollCall(&f);
	rollCall(&l);
	rollCall(&ant);
}