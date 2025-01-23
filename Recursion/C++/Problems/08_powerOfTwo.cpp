#include<iostream>
using namespace std;

int powerOfTwo(int iNum){
    if(iNum==1){
        return 2;
    }

    return 2* powerOfTwo(iNum-1);
}
int main()
{
    

    cout<<powerOfTwo(3);
    return 0;
}
