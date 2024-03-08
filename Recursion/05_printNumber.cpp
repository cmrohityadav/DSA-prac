#include<iostream>
using namespace std;
void printNumber(int num){

  
    if(num<1) return;

    printNumber(num-1); 
    cout<<num<<" ";
    return;
    
}
int main()
{
    
    int num=15;
    printNumber(num);
    return 0;
}
