#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &v1)
{
    cout<<"Size: "<<v1.size()<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        // cout << v1[i] << " ";
        cout << v1.at(i) << " "; // second method to print element
    }
    v1.push_back(88);
    cout << endl;
}
int main()
{
    vector<int> v;        // zero length vector. This line declares a vector named v that can hold elements of type int. However, at this point, the vector is empty, meaning it doesn't contain any elements. It has a length of zero.
    vector<int> v1(10);   // This line declares a vector named v1 that can hold elements of type int and initializes it with a size of 10. The vector will contain 10 elements, all initialized to their default values for the int type (which is 0). The vector v1 will look something like this after this line is executed:
    vector<int> v2(6, 3); // 3 will print 6 times
    vector<int> v3(v1);
    int element;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter the element to be insert: ";
        cin >> element;
        v.push_back(element);
    }
    vector<int> v4=v;
    v4.push_back(99);

    // vector<int>::iterator itr;
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // print(v);
    // vector<int>::iterator itr;
    // itr = v.begin();
    // v.insert(itr + 2, 5, 800); // 5 copies of 800 will be inserted
    // v.insert(itr + 2, 800);
    print(v);
    // print(v);
    print(v4);


    return 0;
}