#include <iostream>
#include <vector>
#include <list>
using namespace std;

class User
{
    void Print(vector<int>& v)const
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

void Print(const vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    list<int > l;


    //vector list stack queue deque map multimap set multiset string
    vector<int> v;//empty
    vector<User> users;//empty
    vector<int> v1(10);
    vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
    vector<int> v3({ 10,20,30,40,50 });
    cout << v.size() << endl;
    cout << v1.size() << endl;
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    v2[0] = 100;
    v2[2] = 77;
    v2[5] = 15;
    //readonly
    for (int el : v2)
    {
        cout << el << " ";
    }
    cout << endl;

    //vector<int>::iterator ptr =  v2.begin(); - arr[0]
    //vector<int>::iterator ptr =  v2.end(); -- arr[size-1]
    //delete elements
    v2.erase(v2.begin());
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.erase(v2.begin() + 2);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.erase(v2.begin() + 2, v2.end() - 2);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.erase(v2.end() - 1);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;

    //insert - add elements
    v2.insert(v2.begin(), { 11,12,13,14 });
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.insert(v2.end(), 5, 44);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.insert(v2.begin(), 777);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.insert(v2.end(), v3.begin(), v3.end());
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;

    //add to the end
    v2.push_back(444);
    v2.push_back(444);
    v2.push_back(444);
    v2.push_back(444);
    Print(v2);

    //delete at the end
    v2.pop_back();
    Print(v2);
    cout << "------------------------------------" << endl;
    //Print(v2);
    //Print(v3);
    //v2.swap(v3);
    //Print(v2);
    //Print(v3);

    //show first element 
    cout << "First element : " << v2.front() << endl;
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;

    v2.resize(10);
    Print(v2);

    v2.push_back(444);
    Print(v2);

    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    //очищення невикористаної пам*яті
    v2.shrink_to_fit();//delete empty комірки-tiles


    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
    v2.push_back(55);
    Print(v2);
    cout << "Size = " << v2.size() << endl;
    cout << "capacity = " << v2.capacity() << endl;
}