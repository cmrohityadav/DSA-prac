#include<iostream>
using namespace std;

int fib(int iNum){
    if(iNum==1 ){
        return 1;
    }
    if(iNum==0){
        return 0;
    }


    return fib(iNum-1)+fib(iNum-2);

    
}
int main()
{   
    cout<<fib(0)<<endl;
    cout<<fib(1)<<endl;
    cout<<fib(5)<<endl;
    
    return 0;
}
