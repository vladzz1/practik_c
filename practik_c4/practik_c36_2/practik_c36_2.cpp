#include <iostream>
using std::cout; using std::endl; using std::string;

class Driver
{
	string name;
	int age;
public:
	Driver() :name("no data"), age(0) {}
	void show()const
	{
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};

class Engine
{
	string engine;
	float volume;
public:
	Engine() :engine("no data"), volume(0) {}
	void show()const
	{
		cout << "engine: " << engine << endl;
	}
};

class Body
{
	string body;
public:
	Body() :body("no data") {}
	void show()const
	{
		cout << "body: " << body << endl;
	}
};

class Wheels
{
	string wheels;
	float radius;
public:
	Wheels() :wheels("no data"), radius(0) {}
	void show()const
	{
		cout << "wheels: " << wheels << endl;
	}
};

class Door
{
	string door;
public:
	Door() :door("no data") {}
	void show()const
	{
		cout << "door: " << door << endl;
	}
};

class GearBox
{
	string gearBox;
public:
	GearBox() :gearBox("no data") {}
	void show()const
	{
		cout << "gear box: " << gearBox << endl;
	}
};

class Headlights
{
	string headlights;
public:
	Headlights() :headlights("no data") {}
	void show()const
	{
		cout << "headlights: " << headlights << endl;
	}
};

class Car
{
	Engine engine;
	Body body;
	Wheels* wheels;
	Door* door;
	GearBox gearBox;
	Headlights* headlights;
	Driver driver;
public:
	Car()
	{
		engine = Engine();
		body = Body();
		wheels = nullptr;
		door = nullptr;
		gearBox = GearBox();
		headlights = nullptr;
	}
	void show()const
	{
		engine.show();
		body.show();
		if (wheels != nullptr)
		{
			wheels->show();
		}
		else
		{
			cout << "wheels not found\n";
		}
		if (door != nullptr)
		{
			door->show();
		}
		else
		{
			cout << "door not found\n";
		}
		gearBox.show();
		if (headlights != nullptr)
		{
			headlights->show();
		}
		else
		{
			cout << "headlights not found\n";
		}
		driver.show();
	}
	void addDriver(Driver driver)
	{
		this->driver = driver;
	}
};

void main()
{

}