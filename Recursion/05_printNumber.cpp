#include<iostream>
using namespace std;
void printNumber(int num){

    if(num==0)return;

    cout<<num<<" ";
    return printNumber(--num);
}
int main()
{
    
    int num=15;
    printNumber(num);
    return 0;
}
