#include <iostream>
using std::cout; using std::endl; using std::string;

class Enemy
{
protected:
	string name;
	int health;
	float strenght;
	const int naxHealth;
public:
	Enemy() :name("no data"), health(0), strenght(0), naxHealth(0) {}
	Enemy(string name, int s) :name(name), health(naxHealth), strenght(s), naxHealth(100) {}
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

class Dragon : public Enemy
{
	float fire;
public:
	Dragon() :fire(0), Enemy() {}
	Dragon(string name, int s, float f) :fire(f), Enemy(name, s) {}
	void fight(int damage)
	{
		cout << "getting damage: " << damage << endl;
		decreaseHealth(damage - fire);
		cout << "health after damage: " << health  << " % " << endl;
	}
	float attack()
	{
		cout << "attacking with strenght: " << strenght << endl;
		return strenght;
	}
	void PrintD()
	{
		cout << "------------- Dragon-------------------" << endl;
		printE();
		cout << "Fire : " << fire << endl;
	}
};

class Monster : public Enemy
{
	float run_speed;
public:
	Monster() :run_speed(0), Enemy() {}
	Monster(string n, int s, int r) :run_speed(r), Enemy(n, s) {}
	void Print()
	{
		cout << "------------- Monster-------------------" << endl;
		printE();
		cout << "Run speed : " << run_speed << endl;
	}
	void Run()
	{
		cout << "Run speed : " << run_speed << endl;
	}
};

void main()
{
	
}