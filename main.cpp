#include <iostream>
#include<vector>
using namespace std;

int sumOfNNumbers(int n){
    //base case
    if(n==1){
        return 1;
    }

    //recursion call
    int sumFromNMinusOne=sumOfNNumbers(n-1);

    //self work
    int sum=sumFromNMinusOne+n;
    return sum;
}
int main()
{
    cout<<sumOfNNumbers(5);

    return 0;
}