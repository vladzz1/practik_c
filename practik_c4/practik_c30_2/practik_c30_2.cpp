#include <iostream>
using std::cout; using std::endl; using std::string; using std::ostream;

template<typename T>
class List
{
	struct Node
	{
		T value;
		Node* next;
		Node(T value, Node* next) :value(value), next(next) {}
	};
	Node* head;
public:
	List() :head(nullptr) {}
	void addToHead(T value)
	{
		Node* newNode = new Node(value, head);
		head = newNode;
	}
	void printL()const
	{
		Node* corrent = head;
		while (corrent != nullptr)
		{
			cout << corrent->value << " ";
			corrent = corrent->next;
		}
		cout << endl;
	}
	void addToTail(T value)
	{
		Node* newNode = new Node(value, nullptr);
		if (head == nullptr)
		{
			head = newNode;
		}
		else
		{
			Node* corrent = head;
			while (corrent->next != nullptr)
			{
				corrent = corrent->next;
			}
			corrent->next = newNode;
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
		if (head == nullptr)
		{
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
		}
		else
		{
			Node* corrent = head;
			while (corrent->next->next != nullptr)
			{
				corrent = corrent->next;
			}
			delete corrent->next;
			corrent->next = nullptr;
		}
	}
	void deleteFromHead()
	{
		Node* corrent = head;
		head = head->next;
		delete corrent;
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

class Point
{
	int x;
	int y;
public:
	Point() :x(0), y(0) {}
	Point(int x, int y) :x(x), y(y) {}
	void printPoint()const
	{
		cout << "x: " << x << endl << "y: " << y << endl;
	}
	int getX()const
	{
		return x;
	}
	int getY()const
	{
		return y;
	}
	void operator ++()
	{
		x++, y++;
	}
	void operator --()
	{
		x--, y--;
	}
	bool operator >(const Point& other)
	{
		if (this->x > other.x && this->y > other.y)
		{
			return true;
		}
		else
		{
			false;
		}
	}
	bool operator <(const Point& other)
	{
		if (this->x < other.x && this->y < other.y)
		{
			return true;
		}
		else
		{
			false;
		}
	}
	void operator !()
	{
		!x, !y;
	}

};

class Vector
{
	int size;
	List<Point> points;
public:
	Vector() : size(0) {}
	void addPointToTail(Point point)
	{

		points.addToTail(point);
	}
	void addPointToHead(Point point)
	{
		points.addToHead(point);
	}
	void deletePointFromTail()
	{
		points.deleteFromTail();
	}
	void deletePointFromHead()
	{
		points.deleteFromHead();
	}
	void printPoints()const
	{
		points.printL();
	}
};

ostream& operator <<(ostream& out, const Point& other)
{
	out << "x:" << other.getX() << "." << "y:" << other.getY() << " ";
	return out;
}

void main()
{
	Vector v;
	v.addPointToHead(Point(5, 7));
	v.addPointToHead(Point(2, 4));
	v.addPointToHead(Point(2, 6));
	v.addPointToHead(Point(5, 4));
	v.printPoints();
	v.addPointToTail(Point(3, 5));
	v.addPointToTail(Point(1, 2));
	v.addPointToTail(Point(3, 3));
	v.printPoints();
	v.deletePointFromHead();
	v.deletePointFromHead();
	v.printPoints();
	v.deletePointFromTail();
	v.deletePointFromTail();
	v.printPoints();
}