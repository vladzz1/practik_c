#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;
map<string, int>::iterator FindByValue(map<string, int>& clients, int value)
{

    for (map<string, int>::iterator i = clients.begin(); i != clients.end(); i++)
    {
        if (i->second == value)
        {
            return i;
        }
    }
    return clients.end();
}
struct ID
{
    int id;
    string name;
    ID() {}
    ID(int id, string name) :id(id), name(name) {}
    void Show()const
    {
        cout << "Id : " << id << "  Name : " << name << endl;
    }
    bool operator < (const ID& other)const
    {
        return this->name < other.name;
    }

};
class Dictionary
{
    string name;
    map<string, list<string>> dic;
public:
    void AddNewWord(string key, list<string> value)
    {
        string word = "run";
        list<string> meanings = { "bigtu", "pochatu","zapochatkevatu" };

        auto res = dic.insert(make_pair(key, value));
        if (res.second)
        {
            cout << "word added\n";
        }
        dic.insert(make_pair("word", list<string>({ "slovo" })));
        dic.insert(make_pair("mind", list<string>({ "dumka","dusha","spogad" })));
        dic.insert(make_pair("bad", list<string>({ "poganuy","borg" })));
        for (string item : dic["bad"])
        {
            cout << item << " ";
        }
    }
    void AddTranlate(string key, string newTranslate)
    {
        if (dic.find(key) == dic.end())
        {
            cout << "word not found\n";
        }
        else
        {
            dic[key].push_back(newTranslate);
        }
    }
    void show()
    {
        for (auto elem : dic)
        {
            cout << elem.first << " ";
            for (string translate : elem.second)
            {
                cout << translate;
            }
        }
    }

};
int main()
{
    //SetConsoleCP(1251); SetConsoleOutputCP(1251);
    //setlocale(LC_CTYPE, "ukr");
    //map<string, list<string>> dic;
    Dictionary dictionary;
    short key;
    while (true)
    {
        cout << "\t1. add a word with translations\n";
        cout << "\t2. find word translations\n";
        cout << "\t3. add translation to an existing word\n";
        cout << "\t4. delete a word along with all translations\n";
        cout << "\t5. show all words available in the dictionary\n";
        cout << "\t0. exit\n";
        cout << "\twhat do you want to do?\n";
        cin >> key;
        switch (key)
        {
        case 0:
            return 0;
        case 1:
            //dictionary.AddNewWord();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout << "there is no \"" << key << "\" in the menu\n";
            break;
        }

    }


    //////////////////// add translate
  /*  string input = "";
    cout << "Enter word to add translatins: "; getline(cin, input);

    if (dic.find(input) == dic.end())
        cout << "Word not found!\n";
    else
    {
        string translate = "";
        do
        {
            cout << "Enter translate: ";
            getline(cin, translate);
            dic[input].push_back(translate);

        } while (!translate.empty());
    }

    for (string item : dic[input])
    {
        cout << item << " ";
    }*/

    ////////////////////// check translate
    /*cout << "Enter word to translate: "; getline(cin, input);

    if (dic.find(input) == dic.end())
        cout << "Translate not found!\n";
    else
    {
        cout << "\tMeans:\n";
        for (string elem : dic[input])
            cout << elem << " ";
    }*/
    //map<ID, int> m1;
    //ID id1(1, "Taras");
    //pair<ID, int> p1(id1, 15000);
    //m1.insert(p1);

    //m1.insert(make_pair(ID(2, "Olga"), 25000));
    //m1.insert(make_pair(ID(3, "Anna"), 12000));
    //m1.insert(make_pair(ID(7, "Vasia"), 7350));
    //m1[ID(8, "Anna")] = 38000;

    //for (auto i : m1)
    //{
    //    i.first.Show();
    //    cout << "Value : " << i.second << endl;
    //    cout << "_________________________________" << endl;
    //}


    //map<string, int> m;
    //pair<string, int> p("Valia", 5);
    //m.insert(p);
    //m.insert(make_pair("Olga",4));

    //for (auto el : m)
    //{
    //    cout <<"Key : "<<  el.first << " Value: "<< el.second<<endl;
    //}
    //
    ////pair<map<string, int>::iterator, bool> res = m.insert(make_pair("Petro", 8));
    //auto res = m.insert(make_pair("Olga", 8));
    //if (res.second)
    //{
    //    cout << "Added...." << endl;
    //}
    //else
    //{
    //    cout << "Not added!!!" << endl;
    //}
    //cout << "------------------------------" << endl;
    //for (auto el : m)
    //{
    //    cout << "Key : " << el.first << " Value: " << el.second << endl;
    //}

    //cout << "Value : " << m["Valia"] << endl;
    //cout << "Value : " << m["Olga"] << endl;

    // map<string,int>::iterator it =  m.find("Olga");
    // 
    // if (it == m.end())
    // {
    //     cout << "Element not found " << endl;
    // }
    // else
    // {
    //     cout << "Found" << endl;
    //     cout << "Key : " << it->first << ". Value : " << it->second << endl;
    //     //it->first = "Muroslava";//error
    //     it->second = 10;
    //     cout << "Key : " << it->first << ". Value : " << it->second << endl;
    // }

    // it = FindByValue(m, 10);
    // if (it != m.end())
    // {
    //     cout << "Key : " << it->first << " Value : " << it->second << endl;
    // }

    // if (it != m.end())
    // {
    //     m.erase(it);
    // }
    // cout << "_______________________________________________" << endl;
    // for (auto item : m)
    // {
    //     cout << "Key : " << item.first << " Value : " << item.second << endl;
    // }

    // m["Valia"] = 15;
    // m["Petro"] = 4;
    // m["Ira"] = 150;
    // cout << "_______________________________________________" << endl;
    // for (auto item : m)
    // {
    //     cout << "Key : " << item.first << " Value : " << item.second << endl;
    // }
}