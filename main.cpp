#include<iostream>
using namespace std;
int sumOfNumbers(int n){
    if (n==0){
        return 0;
    }

    int lastDigit=n%10;
    n=n/10;
    int sum=sumOfNumbers(n);
    return lastDigit+sum;
}
int main()
{
    std::cout<<sumOfNumbers(123);
    return 0;
}
