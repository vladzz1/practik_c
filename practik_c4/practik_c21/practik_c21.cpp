#include <iostream>
using namespace std;

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
	Train()
	{
		model = "no model";
		countVagon = 0;
		vagons = nullptr;
	}
	Train(string model)
	{
		this->model = model;
		countVagon = 0;
		vagons = nullptr;
	}
	Train(Train& train)
	{

	}
	void Show()
	{
		cout << "model: " << model << endl << "count vagon: " << countVagon << endl;
		for (short i = 0; i < countVagon; i++)
		{
			cout << "vagon number: " << vagons[i].number << endl;
			cout << "vagons places: " << vagons[i].places << endl << "vagons passangers: " << vagons[i].passangers << endl;
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
		for (int i = 0; i < countVagon - 1; i++)
		{
			temp[i] = vagons[i];
		}
		temp[countVagon - 1] = Vagon{ n,pl,pas };
		if (vagons != nullptr)
			delete[] vagons;
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
	~Train()
	{
		if (vagons != nullptr)
			delete[] vagons;
	}
};

void main()
{
	Train train("vipModel");
	train.addVagon();
	train.Show();
	train.addPassangers();
	train.Show();
}