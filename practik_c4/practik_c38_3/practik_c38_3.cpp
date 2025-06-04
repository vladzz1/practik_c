#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Animal
{
	string name;
	string type;
	int age;
	float weight;
public:
	Animal() :name("none"), type("none"), age(0), weight(0) {}
	Animal(string n, string t, int a, float w) :name(n), type(t), age(a), weight(w) {}

	void Show()const
	{
		cout << "Name : " << name << endl;
		cout << "Type : " << type << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl;
	}
	void Move()const
	{
		cout << "I am moving............" << endl;
	}
	friend ofstream& operator <<(ofstream& out, const Animal& animal);
	friend ifstream& operator >>(ifstream& in, Animal& animal);
};
ofstream& operator <<(ofstream& out, const Animal& animal)
{
	out << animal.name << " " << animal.type << " " << animal.age << " " << animal.weight;
	return out;
}
ifstream& operator >>(ifstream& in, Animal& animal)
{
	in >> animal.name >> animal.type >> animal.age >> animal.weight;
	return in;
}
class Zoo
{
	string name;
	Animal* animals;
	int countAnimal;
public:
	Zoo() :name("no name"), animals(nullptr), countAnimal(0) {}
	Zoo(string name) :name(name), animals(nullptr), countAnimal(0) {}
	void AddAnimal(Animal an)//3 + 1
	{
		countAnimal++;//4
		Animal* temp = new Animal[countAnimal];
		for (int i = 0; i < countAnimal - 1; i++)
		{
			temp[i] = animals[i];
		}
		temp[countAnimal - 1] = an;
		delete[]animals;
		animals = temp;
	}
	~Zoo()
	{
		if (animals != nullptr)
			delete[]animals;
	}
	void ShowZoo()const
	{
		cout << "================" << name << "===================" << endl;
		for (int i = 0; i < countAnimal; i++)
		{
			animals[i].Show();
			cout << endl;
		}
	}
	void SaveToFile()
	{
		ofstream out("Zoo.txt", ios_base::out);
		out << name << endl;
		out << countAnimal << endl;
		for (int i = 0; i < countAnimal; i++)
		{
			out << animals[i] << endl;
		}
		out.close();
		cout << "Save to file " << endl;
	}
	void ReadFromFile()
	{
		ifstream in("Zoo.txt", ios_base::in);
		getline(in, name); //in >> name;
		in >> countAnimal;
		animals = new Animal[countAnimal];
		for (int i = 0; i < countAnimal; i++)
		{
			in >> animals[i];
		}
		in.close();
	}
	void BinaryWrite()
	{
		ofstream out("Zoo.bin", ios_base::out | ios_base::binary);
		out.write((char*)&name, sizeof(name));
		out.write((char*)&countAnimal, sizeof(countAnimal));
		for (int i = 0; i < countAnimal; i++)
		{
			out.write((char*)&animals[i], sizeof(animals[i]));

		}
		out.close();
		cout << "Save to file  binary" << endl;
	}
	void BinaryRead()
	{
		ifstream in("Zoo.bin", ios_base::in | ios_base::binary);
		in.read((char*)&name, sizeof(name));
		in.read((char*)&countAnimal, sizeof(countAnimal));
		animals = new Animal[countAnimal];
		for (int i = 0; i < countAnimal; i++)
		{
			in.read((char*)&animals[i], sizeof(animals[i]));

		}
		in.close();

	}
};

int main()
{
	/*Animal animal("Tom", "House pet", 15, 5);
	animal.Show();

	Zoo zoo("Rivne Zoo");
	zoo.AddAnimal(animal);
	zoo.AddAnimal(Animal("Lion","predator",7,150));
	zoo.AddAnimal(Animal("Elephant","herbivorous",7,150));
	zoo.AddAnimal(Animal("Turtle","predator",7,150));
	zoo.AddAnimal(Animal("Puma","predator",7,150));
	zoo.ShowZoo();
	zoo.BinaryWrite();*/

	//zoo.SaveToFile();
	Zoo readFromfile;
	//readFromfile.ReadFromFile();
	readFromfile.BinaryRead();
	readFromfile.ShowZoo();
}