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
		cout << "Student: " << name << endl;
		cout << "Spetialization: " << spetialization << endl;
		for (short i = 0; i < countMark; i++)
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

//---------------------------
//class Student
//{
//	string name;
//	string spetialization;
//	int* marks;
//	int countMark;
//public:
//	Student() :name("no name"), spetialization("none"), marks(nullptr), countMark(0) {}
//	Student(string n, string s) :name(n), spetialization(s)
//	{
//		countMark = rand() % 10 + 1;//1.....10
//		marks = new int[countMark];
//		for (int i = 0; i < countMark; i++)
//		{// rand()%12 --- 0...4
//			marks[i] = rand() % 5 + 8;//8-12
//		}
//	}
//	virtual void printS()const
//	{
//		cout << "Student: " << name << endl;
//		cout << "Spetialization: " << spetialization << endl;
//		for (short i = 0; i < countMark; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//	}
//	virtual ~Student()
//	{
//		if (marks != nullptr)
//		{
//			delete[] marks;
//		}
//	}
//
//};
//class Aspirant : public Student
//{
//	string* subjects;
//	int countSub;
//public:
//	Aspirant() :subjects(nullptr), countSub(0), Student() {}
//	Aspirant(string n, string s, initializer_list<string> list) :
//		Student(n, s) {
//		this->countSub = list.size();
//		subjects = new string[countSub];
//		int i = 0;
//		for (string sub : list)
//		{
//			subjects[i] = sub;
//			i++;
//		}
//	}
//	void printS()const override
//	{
//		Student::printS();
//		cout << "Subject: ";
//		for (short i = 0; i < countSub; i++)
//		{
//			cout << subjects[i] << "  ";
//		}
//		cout << endl;
//	}
//	~Aspirant()
//	{
//		if (subjects != nullptr)
//		{
//			delete[]subjects;
//		}
//	}
//
//};
//---------------------------

void main()
{
	srand(time(0));
	//--------------------------
	/*Student student("Vova", "Programmer");
	student.printS();

	Aspirant asp("Kolya", "Water engineer", { "Recuperation","water treatment", });
	asp.printS();

	Student* group[3]
	{
		new Student("Vova","Programmer"),
		new Aspirant("Kolya", "Water engineer", {"Recuperation","water treatment",}),
		new Aspirant("Olga","Design",{"Main page","UA/UX"})
	};
	for (int i = 0; i < 3; i++)
	{
		group[i]->printS();
		delete group[i];
	}*/
	//--------------------------
}