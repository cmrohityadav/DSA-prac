#include<iostream>
using namespace std;

int missingNumber(int A[], int N)
{
    // Your code goes here
    int arrSum=0;
    int actualSum=(N*(N+1))/2;
  
    for(int i=0;i<N-1;i++){
        arrSum+=A[i];
        
    }
    int diff=actualSum-arrSum;
    return diff;
}

int missingNumber(int A[], int N)
{
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2=xor2^A[i];
        xor1=xor1^(i+1);
        
    }
    xor1=xor1^N;
    return xor1^xor2;
}


int main()
{
    
    return 0;
}
