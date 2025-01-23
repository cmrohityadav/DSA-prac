#include<iostream>
using namespace std;


int sosonn(int iNum){
    if(iNum==1){
        return 1;
    }

    return (iNum*iNum)+sosonn(iNum-1);
}
int main()
{
    cout<<sosonn(3)<<endl;
    return 0;
}
