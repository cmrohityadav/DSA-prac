#include<iostream>
using namespace std;
bool isPal(int n){
    int rev=0;
    int temp=n;
    while (temp>0)
    {
        int lastDigit=temp%10;
        rev=rev*10+lastDigit;
        temp=temp/10;
    }
    return(rev==n);
    

}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<isPal(n);
  

    return 0;
}
