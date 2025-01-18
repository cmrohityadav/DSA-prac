#include<iostream>
using namespace std;
/*print number from n to 1*/
void printN(int iNum){
    //base condition=>kab rukna hai humko

    if(iNum==0){
        return;
    }
    cout<<iNum<<" ";
    printN(iNum - 1);
}

int main()
{
    printN(100);
    return 0;
}
