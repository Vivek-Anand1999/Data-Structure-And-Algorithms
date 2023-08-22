#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &v)
{
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;
}
int main(){
    int N;
    cout<<"tell me how many vector of array you want to create: "<<endl;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cout<<"enter the size of an array vector: "<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            int element;
            cout<<"enter the elemnet of an array vector: "<<endl;
            cin>>element;
            v[i].push_back(element);
        }
    }
    for(int i=0;i<N;i++){
        print(v[i]);
    }
    return 0;

}