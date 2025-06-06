#include <iostream>
#include <list>
using namespace std;

void Show(list<int>& l1, list<int>& l2)
{
	cout << "List 1: ";
	list<int>::iterator iter;
	for (iter = l1.begin(); iter != l1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "List 2: ";
	/*int a = 5;
	float b = 3.14;
	int f;
	auto c = 8;
	auto d = 7.14;*/

	for (auto iter = l2.begin(); iter != l2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
struct Book
{
	string name;
	string author;
	int pages;
};
bool CompareBookByName(const Book& b1, const Book& b2)
{
	return b1.name < b2.name;
}
bool CompareBookByAuthor(const Book& b1, const Book& b2)
{
	return b1.author < b2.author;
}
bool CompareBookByPages(const Book& b1, const Book& b2)
{
	return b1.pages < b2.pages;
}
int main()
{
	list<Book> library;
	library.assign({
		Book{"Night","Gogol",852},
		Book{"Day","Taras",325},
		Book{"Evening","Franko",547}
		});
	cout << "----------- Original list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}

	library.sort(CompareBookByName);
	cout << "----------- Sort by name list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}
	library.sort(CompareBookByAuthor);
	cout << "----------- Sort by author list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}

	library.sort(CompareBookByPages);
	cout << "----------- Sort by pages list : ---------------" << endl;
	for (Book b : library)
	{
		cout << b.name << " " << b.author << " " << b.pages << endl;
	}
	cout << "Size : " << library.size() << endl;


	//list<int> l1, l2;	
	//for (int i = 0; i < 10; i++)
	//{
	//	//add to tail
	//	l1.push_back(i);
	//	//add to head
	//	l2.push_front(i);
	//}
	//Show(l1, l2);
	////add new elements (delete old elements)
	//l1.assign({ 10,11,12 });
	//Show(l1, l2);


	////delete element by address
	//auto iter = l1.begin();
	//iter++;
	////l1.erase(l1.begin());
	//l1.erase(iter);
	//Show(l1, l2);

	//l2.remove(2);
	//Show(l1, l2);

	////add elenets by position
	//l1.insert(l1.begin(), 5);
	//Show(l1, l2);
	//l1.insert(l1.end(), { 44,55,66,77,88 });
	//Show(l1, l2);
	//l1.insert(l1.begin(), l2.begin(), l2.end());
	//Show(l1, l2);
	//l1.insert(l1.end(), 3, 11);
	//Show(l1, l2);

	////change size
	////l1.resize(50);
	//l1.resize(50, 7);
	//Show(l1, l2);
	////remove element in l1, add element in l2
	//l1.splice(l1.end(), l2, l2.begin());
	//Show(l1, l2);

	//l1.reverse();
	//Show(l1, l2);

	//l1.sort();
	//l2.sort();
	//Show(l1, l2);

	////add l1 += l2
	//l1.merge(l2);
	//Show(l1, l2);

	////delete dublicates
	//l1.unique();
	//Show(l1, l2);

	//l1.swap(l2);
	//Show(l1, l2);
}