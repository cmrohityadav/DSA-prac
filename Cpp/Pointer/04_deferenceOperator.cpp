#include<iostream>
using namespace std;

int main()
{
    int mark=10;
    int *ptr=&mark;

    cout<<mark<<endl;
    cout<<ptr<<endl; //print the value of the address stored in the variable


    cout<<"priting the value of the pointer"<<endl;
    cout<<*ptr<<endl; //dereference
    

    *ptr=20;

    //  ptr=200; ->>error (pointer k bukcet sirf address store hoga)
    cout<<mark<<endl;
   
    return 0;
}
