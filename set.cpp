#include <iostream>
#include <set> //it store unique element in sorted  order
#include <string>
using namespace std;
void display(set<string> &s1)
{
    // auto it=s1.begin();
    for (auto &value : s1)
    {
        cout << value << " " << endl;
    }
    cout << endl;
    auto it = s1.find("vivek");
    if (it == s1.end())
    {
        cout << "no value found: "<<endl;
    }
    else
    {
        cout << "value found : " << *it<<endl;
    }
    s1.erase("anand");
}
int main()
{
    set<string> s;
    s.insert("vivek");
    s.insert("anand");
    s.insert("samir");
    s.insert("ram");
    s.insert("shyam");
    s.insert("golu");
    s.insert("anu");
    s.insert("kamal");
    s.insert("sunita");
    s.insert("rahul");
    s.insert("vivek");
    display(s);
    display(s);

    return 0;
}