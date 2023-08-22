#include <iostream>
#include <vector>
using namespace std;
void print(vector<pair<int,string> > &v)
{
    // cout<<"Size: "<<v.size()<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    // cout << endl;
    for(pair<int,string> value: v){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    for(auto value: v){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int ,string> > v1; 
    v1={{1,"vivek"},{2,"sam"}};
    v1.push_back(pair<int,string>(3,"fgh"));
    v1.push_back(make_pair(4,"ghh"));
    v1.push_back({5,"klpo"});


    print(v1);
    return 0;
}