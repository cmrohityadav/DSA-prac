#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>a){ //vector are passes by value 
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void change2(vector<int>&a){ //vector are passes by reference
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change2(v);
    cout<<endl;

 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
