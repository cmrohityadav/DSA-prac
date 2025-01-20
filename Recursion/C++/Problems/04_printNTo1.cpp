#include<iostream>
using namespace std;

void printNTo1(int iNum){
    if(iNum==0){
        return ;
    }
    printNTo1(iNum-1);
    cout<<iNum<<" ";
}
int main()
{
    printNTo1(5);

    return 0;
}
