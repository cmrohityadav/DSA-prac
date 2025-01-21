#include<iostream>
using namespace std;

void printEven1ToN(int iNum){

    if(iNum==0){
        return;
    }

    printEven1ToN(iNum-1);
    if(iNum%2==0){
        cout<<iNum<<" ";
    }
}
int main()
{
    printEven1ToN(10);
    return 0;
}
