#include <iostream>
#include<vector>
using namespace std;

int factorialOfN(int n){
    //base case
    if(n==1){
       return 1;
    }

    //recursion call
    int product=factorialOfN(n-1);

    //self work
    return product*n;
   
}
int main()
{
    cout<<factorialOfN(5);

    return 0;
}