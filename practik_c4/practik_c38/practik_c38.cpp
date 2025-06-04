#include <iostream>
#include <windows.h>
#include <fstream>
using std::cout; using std::endl; using std::cin; using std::string;
using std::ifstream; using std::ofstream; using std::ios_base;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

struct Vagon
{
	int number;
	int places;
	int passangers;
};

class Train
{
	string model;
	Vagon* vagons;
	int countVagon;
public:
	Train() :model("no data"), countVagon(0), vagons(nullptr) {}
	Train(string model) :model(model), countVagon(0), vagons(nullptr) {}
	/*Train(Train& train)
	{

	}*/
	void Show()const
	{
		cout << "model: " << model << endl << "count vagon: " << countVagon << endl;
		for (short i = 0; i < countVagon; i++)
		{
			cout << "vagon number: " << vagons[i].number << endl;
			cout << "vagons places: " << vagons[i].places << endl;
			cout << "vagons passangers: " << vagons[i].passangers << endl;
		}
	}
	void addVagon()
	{
		int n, pl, pas;
		cout << "enter number vagon: ";
		cin >> n;
		cout << "enter places: ";
		cin >> pl;
		cout << "enter passangers: ";
		cin >> pas;
		countVagon++;
		Vagon* temp = new Vagon[countVagon];
		for (short i = 0; i < countVagon - 1; i++)
		{
			temp[i] = vagons[i];
		}
		temp[countVagon - 1] = Vagon{ n,pl,pas };
		if (vagons != nullptr)
		{
			delete[] vagons;
		}
		vagons = temp;
	}
	void addPassangers()
	{
		int n;
		cout << "enter vagon number: ";
		cin >> n;
		if (vagons->passangers >= vagons->places)
		{
			cout << "there is no place\n";
		}
		else
		{
			vagons[n - 1].passangers++;
		}
	}
	void BinaryWrite()
	{
		ofstream out("Train.bin", ios_base::out | ios_base::binary);
		if (!out.is_open())
		{
			setColor(4);
			cout << "file opening error\n";
			setColor(7);
		}
		out.write((char*)&model, sizeof(model));
		out.write((char*)&countVagon, sizeof(countVagon));
		for (short i = 0; i < countVagon; i++)
		{
			out.write((char*)&vagons[i], sizeof(vagons[i]));
		}
		out.close();
	}
	void BinaryRead()
	{
		ifstream in("Train.bin", ios_base::in | ios_base::binary);
		if (!in.is_open())
		{
			setColor(4);
			cout << "file opening error\n";
			setColor(7);
		}
		in.read((char*)&model, sizeof(model));
		in.read((char*)&countVagon, sizeof(countVagon));
		vagons = new Vagon[countVagon];
		for (short i = 0; i < countVagon; i++)
		{
			in.read((char*)&vagons[i], sizeof(vagons[i]));
		}
		in.close();
	}
	~Train()
	{
		if (vagons != nullptr)
		{
			delete[] vagons;
		}
	}
};

void main()
{
	Train train("vipModel");
	train.addVagon();
	train.Show();
	train.addPassangers();
	train.Show();
	cout << "-------------------------\n";
	train.BinaryWrite();
	train.BinaryRead();
	train.Show();
}