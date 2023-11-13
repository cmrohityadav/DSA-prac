#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int revNum=0;
    int orgNum=num;
    while(num>0){

        int lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num/=10;

    }
if(orgNum==revNum){
    cout<<"palindrome number";
}else{
    cout<<"not palindrome number";
}


    return 0;
}