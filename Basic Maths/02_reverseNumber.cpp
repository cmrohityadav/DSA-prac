#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int rev=0;
    while (num!=0)
    {
       int lastDigit=num%10;
       rev=rev*10+lastDigit;
       num=num/10;
    }
    cout<<"Reverse Number is "<<rev<<endl;
    
    return 0;
}
