#include <iostream>
#include <fstream>
using namespace std;

class Point
{
	int x;
	int y;
	int z;
public:
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void setZ(int z)
	{
		this->z = z;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getZ()
	{
		return z;
	}
	void initXYZ()
	{
		cout << "enter x: ";
		cin >> x;
		cout << "enter y: ";
		cin >> y;
		cout << "enter z: ";
		cin >> z;
	}
	void printXYZ()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
	}
	void saveToFile()
	{
		ofstream fileXYZ("fileXYZ.txt");
		if (!fileXYZ.is_open())
		{
			cout << "Error opening file\n";
		}
		fileXYZ << x << endl;
		fileXYZ << y << endl;
		fileXYZ << z << endl;
		fileXYZ.close();
	}
	void readFromFile()
	{
		ifstream fileXYZ("fileXYZ.txt");
		if (!fileXYZ)
		{
			cout << "Error file\n";
		}
		char readText[100];
		for (short i = 0; i < 3; i++)
		{
			fileXYZ.getline(readText, 100);
			cout << readText << endl;
		}
	}
};

class Student
{
	string Name;
	string surName;
	string lastName;
	string dayOfBirth;
	string monthOfBirth;
	string yearOfBirth;
	string phone;
	string city;
	string country;
	string educationalInstitution;
	string cityWTEIIL;
	string countryWTEIIL;
	short groupNumber;
public:
	void setName(string fullName)
	{
		this->Name = fullName;
	}
	void setSurName(string surName)
	{
		this->surName = surName;
	}
	void setLastName(string lastName)
	{
		this->lastName = lastName;
	}
	void setDayOfBirth(string dayOfBirth)
	{
		this->dayOfBirth = dayOfBirth;
	}
	void setMonthOfBirth(string monthOfBirth)
	{
		this->monthOfBirth = monthOfBirth;
	}
	void setYearOfBirth(string yearOfBirth)
	{
		this->yearOfBirth = yearOfBirth;
	}
	void setPhone(string phone)
	{
		this->phone = phone;
	}
	void setCity(string city)
	{
		this->city = city;
	}
	void setCountry(string country)
	{
		this->country = country;
	}
	void setEducationalInstitution(string educationalInstitution)
	{
		this->educationalInstitution = educationalInstitution;
	}
	void setCityWTEIIL(string cityWTEIIL)
	{
		this->cityWTEIIL = cityWTEIIL;
	}
	void setCountryWTEIIL(string countryWTEIIL)
	{
		this->countryWTEIIL = countryWTEIIL;
	}
	void setGroupNumber(short groupNumber)
	{
		this->groupNumber = groupNumber;
	}
	string getName()
	{
		return Name;
	}
	string getSurName()
	{
		return surName;
	}
	string getLastName()
	{
		return lastName;
	}
	string getDayOfBirth()
	{
		return dayOfBirth;
	}
	string getMonthOfBirth()
	{
		return monthOfBirth;
	}
	string getYearOfBirth()
	{
		return yearOfBirth;
	}
	string getPhone()
	{
		return phone;
	}
	string getCity()
	{
		return city;
	}
	string getcountry()
	{
		return country;
	}
	string getEducationalInstitution()
	{
		return educationalInstitution;
	}
	string getCityWTEIIL()
	{
		return cityWTEIIL;
	}
	string getCountryWTEIIL()
	{
		return countryWTEIIL;
	}
	short getGroupNumber()
	{
		return groupNumber;
	}
	void initStudent()
	{
		cout << "enter name: ";
		cin >> Name;
		cout << "enter surname: ";
		cin >> surName;
		cout << "enter lastname: ";
		cin >> lastName;
		cout << "enter dey of birth: ";
		cin >> dayOfBirth;
		cout << "enter month of birth: ";
		cin >> monthOfBirth;
		cout << "enter year of birth: ";
		cin >> yearOfBirth;
		cout << "enter phone: ";
		cin >> phone;
		cout << "enter city: ";
		cin >> city;
		cout << "enter country: ";
		cin >> country;
		cout << "enter educational institution: ";
		cin >> educationalInstitution;
		cout << "enter city ​​where the educational institution is located: ";
		cin >> cityWTEIIL;
		cout << "enter country where the educational institution is located: ";
		cin >> countryWTEIIL;
		cout << "enter group number: ";
		cin >> groupNumber;
	}
	void printStudent()
	{
		cout << "Name = " << Name << endl;
		cout << "surname = " << surName << endl;
		cout << "lastname = " << lastName << endl;
		cout << "dey of birth = " << dayOfBirth << endl;
		cout << "month of birth = " << monthOfBirth << endl;
		cout << "year of birth = " << yearOfBirth << endl;
		cout << "phone = " << phone << endl;
		cout << "city = " << city << endl;
		cout << "cicountryty = " << country << endl;
		cout << "educational institution = " << educationalInstitution << endl;
		cout << "city ​​where the educational institution is located = " << cityWTEIIL << endl;
		cout << "country where the educational institution is located = " << countryWTEIIL << endl;
		cout << "group number = " << groupNumber << endl;
	}
};

void main()
{
	//завдання 1

	Point point;
	point.initXYZ();
	point.printXYZ();
	point.saveToFile();
	point.readFromFile();

	//завдання 2

	Student student;
	student.initStudent();
	student.printStudent();
}