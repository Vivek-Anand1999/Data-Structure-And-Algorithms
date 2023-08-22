#include <iostream>
#include <list>
using namespace std;
void print(list<int> &l1)
{
    list<int>::iterator itr;
    for (itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(9);
    list1.push_back(90);
    list1.push_back(90);
    list1.push_back(99);

    // print(list1);
    // list1.remove(90);
    // print(list1);

    list<int> list2(6);
    int element;
    list<int>::iterator it;
    for (it = list2.begin(); it != list2.end(); it++)
    {
        cout << "enter the element to be insert in list2: ";
        cin >> element;
        *it = element;
    }
    // list2.pop_back();
    // list2.pop_front();
    // list2.sort();
    // list1.merge(list2);
    // list1.sort();
    list2.reverse();
    print(list2);
    return 0;
}