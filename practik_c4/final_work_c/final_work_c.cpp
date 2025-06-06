#include <iostream>
#include <windows.h>
#include <vector>
#include <fstream>
using std::cout; using std::endl; using std::cin; using std::string;
using std::vector; using std::exception; using std::out_of_range;
using std::invalid_argument; using std::ofstream; using std::ios_base;
using std::ifstream; using std::invalid_argument;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class Element
{
	string type;
	string name;
	int price;
public:
	Element() :type("no data"), name("no data"), price(0) {}
	Element(string type, string name, int price)
	{
		this->type = type;
		this->name = name;
		if (price > 0)
		{
			this->price = price;
		}
		else
		{
			throw invalid_argument("error: incorrect price\n");
		}
	}
	void setPrice(int price)
	{
		this->price = price;
	}
	void setType(string type)
	{
		this->type = type;
	}
	void setName(string name)
	{
		this->name = name;
	}
	int getPrice()const
	{
		return price;
	}
	string getType()const
	{
		return type;
	}
	string getName()const
	{
		return name;
	}
	void show(vector<Element> shop, short index)const
	{
		cout << index + 1 << ". type: " << shop[index].type << " | name: " << shop[index].name << " | price: " << shop[index].price << endl;
	}
};

class Shop : public Element
{
	vector<Element> shop;
	short size;
public:
	Shop() :shop(0), size(0) {}
	explicit Shop(short number) :shop(number), size(0) {}
	void showAll()const
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			for (short i = 0; i < size; i++)
			{
				cout << "\t";
				show(shop, i);
			}
		}
	}
	void addNewElement()
	{
		cout << "\tenter type: ";
		string type;
		cin >> type;
		cout << "\tenter name: ";
		string name;
		cin >> name;
		cout << "\tenter price: ";
		int price;
		cin >> price;
		Element element(type, name, price);
		shop.push_back(element);
		size++;
	}
	void deleteAll()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			cout << "\tAre you sure you want to delete everything?\n";
			cout << "\t1. yes\n";
			cout << "\t2. no\n\t";
			char key;
			cin >> key;
			switch (key)
			{
			case '1':
				setColor(5);
				cout << "deleted items\n";
				cout << "-----------------------------------------\n";
				for (short i = 0; i < size; i++)
				{
					show(shop, i);
				}
				cout << "-----------------------------------------\n";
				setColor(7);
				shop.erase(shop.begin(), shop.end());
				size = 0;
				break;
			case '2':
				break;
			default:
				setColor(4);
				cout << "there is no \"" << key << "\" on the menu\n";
				setColor(7);
				break;
			}
		}
	}
	void deleteElement()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			cout << "\twhich item to delete?\n\t";
			short item;
			cin >> item;
			if (item > 0 && item <= size)
			{
				shop.erase(shop.begin() + (item - 1));
				size--;
			}
			else
			{
				throw out_of_range("error: incorrect position\n");
			}
		}
	}
	void sortingByPrice()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			for (short i = 0; i < size - 1; i++)
			{
				for (short j = 0; j < size - i - 1; j++)
				{
					if (shop[i].getPrice() > shop[i + 1].getPrice())
					{
						Element temp = shop[i];
						shop[i] = shop[i + 1];
						shop[i + 1] = temp;
					}
				}
			}
			for (short i = 0; i < size; i++)
			{
				cout << "\t";
				show(shop, i);
			}
		}
	}
	void sample()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			cout << "\tenter maximum price: ";
			Element element;
			int item;
			cin >> item;
			element.setPrice(item);
			short count(0);
			for (short i = 0; i < size; i++)
			{
				if (shop[i].getPrice() <= element.getPrice())
				{
					count++;
				}
			}
			if (count > 0)
			{
				for (short i = 0; i < size; i++)
				{
					if (shop[i].getPrice() <= element.getPrice())
					{
						cout << "\t";
						show(shop, i);
					}
				}
			}
			else
			{
				setColor(5);
				cout << "there are no products in the store with a price lower than " << element.getPrice() << endl;
				setColor(7);
			}
		}
	}
	void chooseOneType()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			cout << "\tenter type: ";
			Element element;
			string item;
			cin >> item;
			element.setType(item);
			short count(0);
			for (short i = 0; i < size; i++)
			{
				if (shop[i].getType() == element.getType())
				{
					count++;
				}
			}
			if (count > 0)
			{
				for (short i = 0; i < size; i++)
				{
					if (shop[i].getType() == element.getType())
					{
						cout << "\t";
						show(shop, i);
					}
				}
			}
			else
			{
				setColor(5);
				cout << "there is no product type " << element.getType() << " in the store\n";
				setColor(7);
			}
		}
	}
	void changePrice()
	{
		if (shop.empty())
		{
			setColor(5);
			cout << "the store is empty\n";
			setColor(7);
		}
		else
		{
			cout << "\twhich element should I change the price of?\n\t";
			short item;
			cin >> item;
			if (item < 1 || item > size)
			{
				throw out_of_range("error: incorrect position\n");
			}
			cout << "\twhat will be the new price of this item?\n\t";
			int newPrice;
			cin >> newPrice;
			if (newPrice < 1)
			{
				throw invalid_argument("error: incorrect price\n");
			}
			shop[item - 1].setPrice(newPrice);
		}
	}
	void writeToFile()
	{

		ofstream out("shop.txt", ios_base::out);
		if (!out.is_open())
		{
			throw exception("error: could not open file\n");
		}
		out << size << endl;
		for (short i = 0; i < size; i++)
		{
			out << shop[i].getType() << endl;
			out << shop[i].getName() << endl;
			out << shop[i].getPrice() << endl;
		}
		out.close();
		
	}
	void readFromFile()
	{
		if (shop.empty())
		{
			ifstream in("shop.txt", ios_base::in);
			if (!in.is_open())
			{
				throw exception("error: could not open file\n");
			}
			in >> size;
			shop.resize(size);
			string itemT;
			string itemN;
			int itemP;
			for (short i = 0; i < size; i++)
			{
				in >> itemT;
				in >> itemN;
				in >> itemP;
				shop[i].setType(itemT);
				shop[i].setName(itemN);
				shop[i].setPrice(itemP);
			}
			in.close();
			return;
		}
		cout << "\tAre you sure you want to read the store from a file?\n\tyour store will be overwritten\n";
		cout << "\t1. yes\n";
		cout << "\t2. no\n\t";
		char key;
		cin >> key;
		if (key == '1')
		{
			ifstream in("shop.txt", ios_base::in);
			if (!in.is_open())
			{
				throw exception("error: could not open file\n");
			}
			in >> size;
			shop.resize(size);
			string itemT;
			string itemN;
			int itemP;
			for (short i = 0; i < size; i++)
			{
				in >> itemT;
				in >> itemN;
				in >> itemP;
				shop[i].setType(itemT);
				shop[i].setName(itemN);
				shop[i].setPrice(itemP);
			}
			in.close();
		}
		else if (key == '2')
		{
			return;
		}
		else
		{
			setColor(4);
			cout << "there is no \"" << key << "\" on the menu\n";
			setColor(7);
		}
	}
};

short main()
{
	Shop shop;
	char key;
	while (true)
	{
		try
		{
			cout << "\tenter\n";
			cout << "\t1. show all\n";
			cout << "\t2. add new element\n";
			cout << "\t3. delete all\n";
			cout << "\t4. delete element\n";
			cout << "\t5. sorting by price\n";
			cout << "\t6. sample\n";
			cout << "\t7. choose one type\n";
			cout << "\t8. change price\n";
			cout << "\t9. read store from file\n";
			cout << "\t0. exit\n";
			cout << "\twhat do you want to do?\n\t";
			cin >> key;
			switch (key)
			{
			case '0':
				cout << "\tyou really want out?\n";
				cout << "\t1. yes\n";
				cout << "\t2. no\n\t";
				cin >> key;
				switch (key)
				{
				case '1':
					shop.writeToFile();
					return 0;
				case '2':
					break;
				default:
					setColor(4);
					cout << "there is no \"" << key << "\" on the menu\n";
					setColor(7);
					break;
				}
				break;
			case '1':
				shop.showAll();
				break;
			case '2':
				shop.addNewElement();
				break;
			case '3':
				shop.deleteAll();
				break;
			case '4':
				shop.deleteElement();
				break;
			case '5':
				shop.sortingByPrice();
				break;
			case '6':
				shop.sample();
				break;
			case '7':
				shop.chooseOneType();
				break;
			case '8':
				shop.changePrice();
				break;
			case '9':
				shop.readFromFile();
				break;
			default:
				setColor(4);
				cout << "there is no \"" << key << "\" on the menu\n";
				setColor(7);
				break;
			}
		}
		catch (out_of_range x)
		{
			setColor(4);
			cout << x.what();
			setColor(7);
		}
		catch (invalid_argument x)
		{
			setColor(4);
			cout << x.what();
			setColor(5);
			cout << "price must be greater than 0\n";
			setColor(7);
		}
		catch (exception x)
		{
			setColor(4);
			cout << x.what();
			setColor(7);
		}
	}
}