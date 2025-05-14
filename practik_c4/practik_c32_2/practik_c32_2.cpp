#include <iostream>
using std::cout; using std::endl; using std::string;

class Enamy
{
protected:
	string name;
	int health;
	float strenght;
	const int naxHealth;
public:
	Enamy() :name("no data"), health(0), strenght(0), naxHealth(0) {}
	Enamy(string name, int s) :name(name), health(naxHealth), strenght(s), naxHealth(100) {}
	void printE()
	{
		cout << "name: " << name << endl;
		cout << "health: " << health << endl;
		cout << "strenght: " << strenght << endl;
	}
	bool isAlive()
	{
		return health > 0;
	}
	void decreaseHealth(int value)
	{
		if (health - value < 0)
		{
			health = 0;
		}
		else
		{
			health -= value;
		}
	}
};

class Dragon : public Enamy
{
	float fire;
public:
	Dragon() :fire(0), Enamy() {}
	Dragon(string name, int s, float f) :fire(f), Enamy(name, s) {}
	void fight(int damage)
	{
		cout << "getting damage: " << damage << endl;
		decreaseHealth(damage - fire);
		cout << "health after damage: " << health  << " % " << endl;
	}
	float attak()
	{
		cout << "attacking with strenght: " << strenght << endl;
	}
};

void main()
{

}