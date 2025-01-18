#include<iostream>
using namespace std;
/*print even number from n to 1*/
void printEven(int iNumber){
    //base condition here
    if(iNumber==1){
        return;
    }
    //printing even condition
    if(iNumber%2==0){
        cout<<iNumber<<" ";
    }

    printEven(iNumber-1);
}
int main()
{   printEven(8);
    
    return 0;
}
