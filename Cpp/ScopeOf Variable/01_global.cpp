#include<iostream>
using namespace std;
string name="rohit"; //global

void naam(){
    cout<<name<<endl;
}

int main()
{
    cout<<name<<endl;
    name="rahul";
    naam();

    return 0;
}
