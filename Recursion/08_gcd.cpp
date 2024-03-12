#include<iostream>
using namespace std;
int gcd(int a,int b){

    if(b>a)return gcd(b,a);

    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    /*gcd(greatest common divisor)/hcf*/
    int num1=10;
    int num2=20;
    cout<<gcd(num1,num2);




    return 0;
}
