#include<iostream>
using namespace std;

int main()
{
    char name[100];

    cin>>name;

    cout<<"your name is "<<name<<endl;


    for(int i=0;i<10;i++){
        cout<<"index at "<<i<< "  "<<name[i]<<endl;

    }

    cout<<(int)name[5]<<endl;
    return 0;
}
