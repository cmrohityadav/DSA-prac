#include <iostream>
#include<vector>
using namespace std;

void printNumberNToOne(int n){
    //base case
    if(n==0){
        return;
    }

    // self work
    cout<<n<<endl;
    // recursion call
    printNumberNToOne(n-1);
}
int main()
{
    printNumberNToOne(10);

    return 0;
}