#include <iostream>
using std::cout; using std::endl; using std::string;

class Document
{
	string name;
	string text;
	string format;
	int count;
public:
	Document() :name("no data"), text("no data"), format("no data"), count(0) {}
	Document(string name, string text, string format, int count) :name(name), text(text), format(format), count(count) {}
	void show()const
	{
		cout << "name: " << name << endl;
		cout << "text: " << text << endl;
		cout << "format: " << format << endl;
		cout << "count: " << count << endl;
	}
};

class Scanner
{
	float dpi;
	float power;
	float height, width;
public:
	Scanner() :dpi(0), power(0), height(0), width(0) {}
	Scanner(float dpi, float power, float height, float width) :dpi(dpi), power(power), height(height), width(width) {}
	void show()const
	{
		cout << "dpi: " << dpi << endl;
		cout << "power: " << power << endl;
		cout << "height: " << height << endl;
		cout << "width: " << width << endl;
	}
};

class Cartridge
{
	string color;
	float volume;
public:
	Cartridge() :color("no data"), volume(0) {}
	Cartridge(string color, float volume) :color(color), volume(volume) {}
	void show()const
	{
		cout << "color: " << color << endl;
		cout << "volume: " << color << endl;
	}
};

class Printer
{
	string model;
	Scanner scanner;
	Cartridge* cartridges;
	int countCartridges;
	Document* document;
public:
	Printer() :model("no data"), cartridges(nullptr), countCartridges(0), document(nullptr) {}
	Printer(string model, float dpi, float power, float height, float width) :model(model)
	{
		scanner = Scanner(dpi, power, height, width);
		countCartridges = 4;
		cartridges = new Cartridge[countCartridges];
		cartridges[0] = Cartridge("bleak", 500);
		cartridges[1] = Cartridge("red", 500);
		cartridges[2] = Cartridge("green", 500);
		cartridges[3] = Cartridge("blue", 500);
		cartridges[4] = Cartridge("yellow", 500);
	}
	void addDocument(Document* document)
	{
		this->document = document;
	}
	void cancsl()
	{
		document = nullptr;
	}
	void printDocument()const
	{
		cout << "printing........." << endl;
		if (document != nullptr)
		{
			document->show();
		}
		else
		{
			cout << "document not found\n";
		}
	}
	void printSetting()
	{
		cout << "printing........." << endl;
		for (short i = 0; i < countCartridges; i++)
		{
			cartridges[i].show();
		}
	}
	void scan()const
	{
		cout << "scanning........." << endl;
		scanner.show();
	}
	~Printer()
	{
		if (cartridges != nullptr)
		{
			delete[] cartridges;
		}
	}
};

void main()
{

}