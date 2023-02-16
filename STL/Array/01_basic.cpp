#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4>a={1,2,3,4};
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd Index =>> "<<a.at(2)<<endl;
    cout<<"empty or not =>> "<<a.empty()<<endl;

    cout<<"First Element =>>"<<a.front()<<endl;
    cout<<"Last elemnt ==>>"<<a.back()<<endl;
    

    return 0;
}
