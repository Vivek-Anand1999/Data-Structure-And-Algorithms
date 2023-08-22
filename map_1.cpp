#include <iostream>
#include <map> // in ordered map the kay value paired are stored in sorted order(the key value of first 1 then 2 then 3.....) it use RED BLACK TREE
using namespace std;

void display(map<int, string> &m1)
{
    cout << "size: " << m1.size() << endl;
    for (auto &value : m1)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
    auto it = m1.find(3);
    if (it == m1.end())
    {
        cout << "No value found: ";
    }
    else
    {
        cout << it->first << " " << it->second;
    }
    
}
int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "vivek"));
    m[2] = "anand";
    m[3] = "kamal";
    m[4] = "sunita";
    m.insert({5, "golu"});
    display(m);
    return 0;
}