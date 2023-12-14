#include<iostream>
using namespace std;

int main()
{   

    //bad practice
    int *ptr;
    int mark=10;

    ptr=&mark;
    cout<<ptr;

    //null pointer
    int *prtn=nullptr;
    cout<<prtn<<endl;
    
    return 0;
}
