#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node* next;
	Node(int value, Node* next) :value(value), next(next) {}
};

class List
{
	Node* head;
public:
	List() :head(nullptr) {}
	void addToHead(int value)
	{
		//Node* newNode = new Node;
		//newNode->value = value;
		//newNode->next = head;
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
	void addToTail(int value)
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
	int operator [](int pos)
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

void main()
{
	List l;
	for (short i = 0; i < 10; i++)
	{
		l.addToHead(i);
	}
	l.printL();
	l.addToTail(100);
	l.addToTail(200);
	l.addToTail(300);
	l.printL();
	l.deleteFromTail();
	l.printL();
	l.deleteFromHead();
	l.printL();
}