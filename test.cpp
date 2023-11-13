#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int revNum=0;

    while(num>0){

        int lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num/=10;

    }
    cout<<revNum;


    return 0;
}