#include <iostream>
#include <utility>
#include <string>
using namespace std;
void display(const pair<int, string> &p1)
{

    cout << p1.first << " " << p1.second;
    cout << endl;
}
int main()
{
    pair<int, string> p;
    p = {0, "dfg"};
    p = make_pair(1, "vivek");
    p = make_pair(2, "anand");
    p = make_pair(3, "sam");
    p = make_pair(4, "kam");
    p = make_pair(5, "pam");
    p = make_pair(6, "lam");
    p = make_pair(7, "dam");

    display(p);

    return 0;
}