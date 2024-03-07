#include<iostream>
using namespace std;
bool  isPalindrome(int num,int &temp){
    if(num>=0 && num<=9){
        int lastDigit=temp%10;
        temp/=10;
        return (num==lastDigit);
    }
        bool result =(isPalindrome(num/10,temp) && (num%10)==((temp)%10));
        temp/=10;
        return result;
}
int main()
{
    int num=12321;
    int tempNumber=num;
    cout<<isPalindrome(num,tempNumber);
    return 0;
}
