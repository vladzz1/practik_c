#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

struct Point
{
	short x;
	short y;
};

void setPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void printPoint(const Point& point)
{
	system("cls");
	setPos(point.x, point.y);
	cout << "*";
	Sleep(2000);
	system("cls");
}

void inputPoint(Point& point)
{
	cout << "enter point x: ";
	cin >> point.x;
	cout << "enter point y: ";
	cin >> point.y;
}

void printPointsArray(const Point* pointsArray, int size)
{
	system("cls");
	for (short i = 0; i < size; i++)
	{
		setPos(pointsArray[i].x, pointsArray[i].y);
		cout << "*";
	}
	Sleep(2000);
	system("cls");
}

void writePointToFileStream(const Point& point, ofstream& file)
{
	if (!file)
	{
		cout << "error opening file\n";
	}
	file << point.x << " " << point.y << endl;
	file.close();
}

void readPointFromFileStream(Point& point, ifstream& file)
{
	if (!file)
	{
		cout << "error file\n";
	}
	char readText[5];
	file.getline(readText, 5);
	cout << readText << endl;
	Sleep(2000);
	system("cls");
	file.close();
}

void main()
{
	const int size = 5;
	Point point;
	inputPoint(point);
	printPoint(point);
	Point points[size]{};
	for (short i = 0; i < size; i++)
	{
		short x;
		short y;
		cout << "enter point\n";
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		points[i].x = x;
		points[i].y = y;
	}
	printPointsArray(points, size);
	ofstream fileXY_c18("fileXY_c18.txt");
	writePointToFileStream(point, fileXY_c18);
	ifstream fileXY2_c18("fileXY_c18.txt");
	readPointFromFileStream(point, fileXY2_c18);
	ofstream fileXY3_c18("fileXY2_c18.txt");
	if (!fileXY3_c18)
	{
		cout << "error opening file\n";
	}
	for (short i = 0; i < 5; i++)
	{
		fileXY3_c18 << points[i].x << " " << points[i].y << " ";
	}
	fileXY3_c18.close();
	ifstream fileXY4_c18("fileXY2_c18.txt");
	if (!fileXY4_c18)
	{
		cout << "error file\n";
	}
	//Point* pPoints = new Point[25]{};
	char readText2[25];
	fileXY4_c18.getline(readText2, 25);
	cout << readText2 << endl;
	//short n = 0;
	/*for (short i = 0; i < 5; i++)
	{
		pPoints[i].x = readText2[n];
		n += 2;
		pPoints[i].y = readText2[n];
		n += 2;
	}
	for (short i = 0; i < 5; i++)
	{
		cout << pPoints[i].x << " " << pPoints[i].y << " ";
	}*/
	//delete[] pPoints;
	fileXY4_c18.close();
	Sleep(2000);
	system("cls");
}