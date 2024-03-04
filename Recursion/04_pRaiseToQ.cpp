#include<iostream>

using namespace std;
int pRaiseToQ(int p,int q){

    if(q==0) return  1;

    return pRaiseToQ(p,--q)*p;
}
int main(){


        int result=pRaiseToQ(3,10);
        cout<<result<<endl;

    return 0;
}