#include <iostream>
using std::cout; using std::endl; using std::string; using std::ostream;

template<typename T>
class List
{
	struct Node
	{
		Node* prev;
		T value;
		Node* next;
		Node(Node* prev, T value, Node* next) :prev(prev), value(value), next(next) {}
	};
	Node* head;
	Node* tail;
public:
	List() :head(nullptr), tail(nullptr) {}
	bool isEmpty()
	{
		return head == nullptr;
	}
	void addToHead(T value)
	{
		Node* newNode = new Node(nullptr, value, head);
		if (isEmpty())
		{
			head = tail = newNode;
		}
		head->prev = newNode;
		head = newNode;
	}
	void printL()const
	{
		/*Node* corrent = head;
		for (Node* i = head; i != nullptr; i++)
		{
			cout << i->value << " ";
		}
		cout << endl;*/
		for (Node* corrent = head; corrent != nullptr; corrent = corrent->next)
		{
			cout << corrent->value;
		}
		cout << endl;
	}
	void addToTail(T value)
	{
		Node* newNode = new Node(tail, value, nullptr);
		if (head == nullptr)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	int getElement(int pos)
	{
		Node* corrent = head;
		short i(1);
		while (corrent != nullptr)
		{
			if (pos == i)
			{
				return corrent->value;
			}
			corrent = corrent->next;
			i++;
		}
	}
	void deleteFromTail()
	{
		if (isEmpty())
		{
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}
	}
	void deleteFromHead()
	{
		if (isEmpty())
		{
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
	}
	int operator[](int pos)
	{
		Node* corrent = head;
		short i(1);
		while (corrent != nullptr)
		{
			if (pos == i)
			{
				return corrent->value;
			}
			corrent = corrent->next;
			i++;
		}
	}
	~List()
	{
		Node* corrent = nullptr;
		while (head != nullptr)
		{
			corrent = head;
			head = head->next;
			delete corrent;
		}
	}
};

struct Vagon
{
	int number;
	int places;
	int passengers;
	Vagon() :number(0), places(0), passengers(0) {}
	Vagon(int number, int places, int passengers) :number(number), places(places), passengers(passengers) {}
	int getNumber()const
	{
		return number;
	}
	int getPlaces()const
	{
		return places;
	}
	int getPassengers()const
	{
		return passengers;
	}
};

class Train
{
	string model;
	int vagonCount;
	List<Vagon> vagons;
public:
	Train() :model("no data"), vagonCount(0) {}
	Train(string model) :model(model), vagonCount(0) {}
	Train(const Train& other)
	{
		this->model = other.model;
		this->vagonCount = other.vagonCount;
		this->vagons = other.vagons;
	}
	void AddVagonToTail(Vagon vagon)
	{
		vagons.addToTail(vagon);
	}
	void AddVagonToHead(Vagon vagon)
	{
		vagons.addToHead(vagon);
	}
	void deleteVagonFromTail()
	{
		vagons.deleteFromTail();
	}
	void deleteVagonFromHead()
	{
		vagons.deleteFromHead();
	}
	void printTrain()
	{
		vagons.printL();
	}
	void operator =(const Train& other)
	{
		this->model = other.model;
		this->vagonCount = other.vagonCount;
		this->vagons = other.vagons;
	}
};

ostream& operator <<(ostream& out, const Vagon& other)
{
	out << "Vagon number: " << other.getNumber() << endl;
	out << "Vagon places: " << other.getPlaces() << endl;
	out << "Vagon passengers: " << other.getPassengers() << endl;
	return out;
}

void main()
{
	Train t;
	t.AddVagonToHead(Vagon(1, 20, 14));
	t.AddVagonToHead(Vagon(2, 30, 11));
	t.AddVagonToTail(Vagon(3, 24, 22));
	t.AddVagonToTail(Vagon(4, 33, 3));
	t.printTrain();
	Train t2(t);
	t2.printTrain();
	Train t3 = t2;
	t3.printTrain();
}