#include<iostream>
using namespace std;

int f(int n){
    //base case or halt
    if(n==1) return 1;

    return  n*f(n-1);
}

int main()
{
    int result=f(2);

    cout<<result;


    return 0;
}
