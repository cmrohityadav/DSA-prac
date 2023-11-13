#include<iostream>
using namespace std;

int main()
{
    
    int num;
    cin>>num;
    int sum=0;
    while(num>0){

        int lastDigit=num%10;
        sum+=lastDigit;
        num/=10;

    }

    cout<<sum<<endl;
    


    return 0;
}
