#include<iostream>
using namespace std;

int main()
{
    int num=1;
    int &num2=num;
    num++;
    cout<<num<<endl;
    cout<<num2<<endl;
    num2++;
    cout<<num2<<endl;
    cout<<num<<endl;


    return 0;
}
