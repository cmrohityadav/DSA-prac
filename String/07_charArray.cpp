#include<iostream>
using namespace std;

int main()
{
    char name[10];

    cout<<"Enter your Name :"<<endl;
    cin>>name;
     cout<<"your name is "<<name<<endl;
    name[2]='\0'; //terminator
    cout<<"your name is "<<name<<endl;





    return 0;
}
