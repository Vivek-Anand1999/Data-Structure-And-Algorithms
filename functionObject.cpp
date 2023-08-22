#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
void print(int Array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[] = {1, 8, 9, 6, 5, 2, 3};
    int size = sizeof(array) / sizeof(int);
    // sort(array, array + size,greater<int>());
    sort(array, array + size, less<int>());

    print(array, size);
    return 0;
}