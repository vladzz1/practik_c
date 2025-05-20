#include <iostream>
using namespace std;

class Student
{
	string name;
	string spetialization;
	int* marks;
	int countMark;
public:
	Student() :name("no data"), spetialization("no data"), marks(nullptr), countMark(0) {}
	Student(string name, string spetialization) :name(name), spetialization(spetialization)
	{
		countMark = rand() % 10 + 1;
		marks = new int[countMark];
		for (short i = 0; i < countMark; i++)
		{
			marks[i] = rand() % 5 + 8;
		}
	}
	virtual void printS()const
	{
		cout << "Student : " << name << endl;
		cout << "Spetialization : " << spetialization << endl;
		for (int i = 0; i < countMark; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
	}
	~Student()
	{
		if (marks != nullptr)
		{
			delete[] marks;
		}
	}
};

class Aspirant : public Student
{
	string subject;
public:
	Aspirant() :subject("no data"), Student() {}
	Aspirant(string name, string spetialization, string subject) :subject(subject), Student(name, spetialization) {}
	void printS()const override
	{
		Student::printS();
		cout << "Subject: " << subject << endl;
	}
};

void main()
{
	srand(time(0));
}