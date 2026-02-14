#include <iostream>
#include<vector>
using namespace std;

void printNumberOneToN(int n){
    //base case
    if(n==0){
        return;
    }

    // recursion call
    printNumberOneToN(n-1);

    // self work | logic
    cout<<n<<endl;
    return;
}
int main()
{
    printNumberOneToN(10);

    return 0;
}