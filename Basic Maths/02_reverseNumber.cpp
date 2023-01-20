#include<iostream>
using namespace std;

int main()
{
   cout<<"Enter the Number"<<endl;
    int num;
    cin>>num;
    int rev=0;
    while (num>0)
    {
        int lastDigit=num%10;
        rev=rev*10+lastDigit;
        num=num/10;


    }
    
cout<<"reverse number is "<<rev<<endl;
    
    return 0;
}
