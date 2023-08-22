#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v1)
{
    static int i = 0;
    cout << "The size of the vector" << i + 1 << ": " << v1.size() << endl;
    i++;
    for (auto value : v1)
    {
        cout << value << " ";
    }
    cout << endl;
}
int main()
{
    vector<vector<int>> v;
    int N;
    cout << "Enter the outer bigger vector size: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of inner vector" << i + 1 << ": ";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int element;
            cout << "Enter the element of inner vector: ";
            cin >> element;
            temp.push_back(element);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        print(v[i]);
    }
    return 0;
}