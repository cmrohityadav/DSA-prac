#include<iostream>
using namespace std;
void printCount(int n){

    //base condtion
    if(n==0) return;

    // processing
    cout<<n<<endl;
 
    // recursive relation 
    printCount(n-1);
}
int main()
{
    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
    printCount(n);

    return 0;
}
