#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    
    //for loop ==>if the size of the vector is the not define
    for(int i=0;i<5;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }

    //if the size is the define
    // vector<int>vec[5];
    // for(int i=0;i<5;i++){
    //     cin>>vec[i];
    // }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // inserting element
    v.insert(v.begin()+2,222); //0+2 position pe 222 a jayega
    
    //printing using forEach lopp
    for(int element:v){
        cout<<element<<" ";
    }

cout<<endl;
//erasing element
v.erase(v.end()-2); //last second element delete ho jayega

 //printing using forEach lopp
    for(int element:v){
        cout<<element<<" ";
    }

    return 0;
}