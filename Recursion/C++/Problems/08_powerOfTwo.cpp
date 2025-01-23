#include<iostream>
using namespace std;

int powerOfTwo(int iNum){
    if(iNum==1){
        return 2;
    }

    return 2* powerOfTwo(iNum-1);
}

int nRaiseToM(int n,int m){
    if(m==1){
        return n;
    }

    return n*nRaiseToM(n,m-1);
}
int main()
{
    

    cout<<powerOfTwo(3)<<endl;

    cout<<nRaiseToM(3,3);
    return 0;
}
