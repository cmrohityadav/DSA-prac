#include<iostream>
using namespace std;

int fib(int n){

    //base case
    if(n==1){
        // first term
        return 0;
    }
    if(n==2){
        //second term
        return 1;
    }

    // Recursive relation
    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main()
{
    

    cout<<"Enter the term you want to see :";
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<n<<"th term  ans is: "<<ans<<endl;

    return 0;
}
