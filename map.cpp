#include <iostream>
#include <map>
#include <string>
using namespace std;
void print(map<int, string> &m)
{
    cout << "The size of map is: " << m.size() << endl;
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << "  " << itr->second << endl;
    }
    cout << endl;
}
int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "vivek"));
    m.insert(pair<int, string>(2, "anand"));
    m.insert(pair<int, string>(3, "ram"));
    m[4] = "shyam";
    m.insert(pair<int, string>(5, "sunita"));
    print(m);
    return 0;
}