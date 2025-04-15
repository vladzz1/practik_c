#include <iostream>
using namespace std;

struct Fullname
{
	string name;
	string surname;
	string lastname;
};

class Abonent
{
	Fullname fullname;
	string homePhone;
	string workPhone;
	string mobilePhone;
	string additionalContactInf;
	static int countAbonent;
public:
	Abonent()
	{
		fullname.name = "no name";
		fullname.surname = "no surname";
		fullname.lastname = "no lastname";
		homePhone = "no homePhone";
		workPhone = "no workPhone";
		mobilePhone = "no mobilePhone";
		additionalContactInf = "no data";
		countAbonent++;
	}
	Abonent(string name, string surname, string lastname) :Abonent()
	{
		fullname.name = name;
		fullname.surname = surname;
		fullname.lastname = lastname;
	}
	Abonent(string name, string surname, string lastname, string homePhone, string workPhone, string mobilePhone) :Abonent(name, surname, lastname)
	{
		this->homePhone = homePhone;
		this->workPhone = workPhone;
		this->mobilePhone = mobilePhone;
	}
	void printAbonent()
	{
		cout << "name = " << fullname.name << endl;
		cout << "surname = " << fullname.surname << endl;
		cout << "lastname = " << fullname.lastname << endl;
		cout << "home phone = " << homePhone << endl;
		cout << "work phone = " << workPhone << endl;
		cout << "mobile phone = " << mobilePhone << endl;
		cout << "additional contact information = " << additionalContactInf << endl;
	}
	string getName()
	{
		return fullname.name;
	}
	string getMobilePhone()
	{
		return mobilePhone;
	}
	~Abonent()
	{
		countAbonent--;
	}
};

class PhoneBook
{
	Abonent* abonents;
	int countAbonents;
public:
	void Add(Abonent a)
	{
		countAbonents++;
		Abonent* temp = new Abonent[countAbonents]{};
		for (short i = 0; i < countAbonents - 1; i++)
		{
			temp[i] = abonents[i];
		}
		temp[countAbonents - 1] = a;
		delete[] abonents;
		abonents = temp;
	}
	void Delete(string phone)
	{
		Abonent* temp = new Abonent[countAbonents]{};
		for (short i = 0; i < countAbonents - 1; i++)
		{
			if (abonents[i].getMobilePhone() != phone)
			{
				temp[i] = abonents[i];
			}
		}
		countAbonents--;
		delete[] abonents;
		abonents = temp;
	}
	void SearchByName(string name)
	{
		for (short i = 0; i < countAbonents; i++)
		{
			if (abonents[i].getName() == name)
			{
				abonents[i].printAbonent();
			}
		}
	}
	void SearchByPhone(string phone)
	{
		for (short i = 0; i < countAbonents; i++)
		{
			if (abonents[i].getMobilePhone() == phone)
			{
				abonents[i].printAbonent();
			}
		}
	}
	void ShowAll()
	{
		for (short i = 0; i < countAbonents; i++)
		{
			abonents[i].printAbonent();
		}
	}
	~PhoneBook()
	{
		if (abonents != nullptr)
		{
			delete[] abonents;
		}
	}
};

int Abonent::countAbonent = 0;

void main()
{

}