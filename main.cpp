#include<iostream>
using namespace std;
/*
* @brief Fibonnaci of n number is f(n)=f(n-1)+f(n-2)
 * This function returns the nth number in the Fibonacci sequence.
 * The sequence starts as: 0, 1, 1, 2, 3, 5, 8...
 * f(0)=0
 * f(1)=1
 * f(2)=1
 * f(3)=2
 * @param n The position in the Fibonacci sequence (must be >= 0)
 * @return The nth Fibonacci number
*/
int  fibonacci(int n){
    //base case
    if(n==0) return 0;
    if(n==1) return 1;

    //recursion call
    int n_minus_one=fibonacci(n-1);
    int n_minus_two=fibonacci(n-2);

    // self work
    return n_minus_one+n_minus_two;

}
int main()
{
   cout<<fibonacci(3);

    return 0;
}
