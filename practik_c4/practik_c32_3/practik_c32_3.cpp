#include <iostream>
#include <windows.h>
using std::cout; using std::endl; using std::string;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class Student
{
	string name;
	string surname;
	short age;
public:
	Student() :name("no data"), surname("no data"), age(0) {}
	Student(string name, string surname, short age) :name(name), surname(surname), age(age) {}
	void printS()
	{
		cout << "name: " << name << endl;
		cout << "surname: " << surname << endl;
		cout << "age: " << age << endl;
	}
};

class Aspirant : public Student
{
	string thesisTitle;
public:
	Aspirant() :thesisTitle("no data"), Student() {}
	Aspirant(string thesisTitle) :thesisTitle(thesisTitle), Student() {}
	void printA()
	{
		printS();
		cout << "thesis title: " << thesisTitle << endl;
	}
};

struct Fullname
{
	string name;
	string surname;
	string lastname;
	Fullname() :name("no data"), surname("no data"), lastname("no data") {}
	Fullname(string name, string surname, string lastname) :name(name), surname(surname), lastname(lastname) {}
};

struct DateOfTime
{
	short day;
	short month;
	short year;
	DateOfTime() :day(0), month(0), year(0) {}
	DateOfTime(short day, short month, short year) :day(day), month(month), year(year) {}
};

class Passport
{
	Fullname fullname;
	DateOfTime dateOfBirth;
	DateOfTime passportIssueDate;
public:
	Passport()
	{
		Fullname();
		DateOfTime();
	}
	Passport(string name, string surname, string lastname, short day, short month, short year)
	{
		Fullname(name, surname, lastname);
		DateOfTime(day, month, year);
	}
	void printP()
	{
		cout << "name: " << fullname.name << endl;
		cout << "surname: " << fullname.surname << endl;
		cout << "lastname: " << fullname.lastname << endl;
		cout << "day: " << dateOfBirth.day << endl;
		cout << "month: " << dateOfBirth.month << endl;
		cout << "year: " << dateOfBirth.year << endl;
		cout << "passport issue date: " << passportIssueDate.day << "." << passportIssueDate.month << "." << passportIssueDate.year << endl;
	}

};

class ForeignPassport : public Passport
{
	string vizas[10];
	short countVizas;
public:
	ForeignPassport() :countVizas(0), vizas{}, Passport() {}
	void addVizas(string value)
	{
		if (countVizas < 11)
		{
			vizas[countVizas] = value;
			countVizas++;
		}
		else
		{
			setColor(4);
			cout << "error: little space\n";
			setColor(7);
		}
	}
	void printF()
	{
		for (short i = 0; i < countVizas; i++)
		{
			cout << vizas[i] << endl;
		}
	}
};

void main()
{

}