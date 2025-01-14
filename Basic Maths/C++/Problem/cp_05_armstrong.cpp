#include<iostream>

using namespace std;

int main(){

    cout<<"Enter ArmStrong Number : ";
    int iNum;
    cin>>iNum;

    int iCopy=iNum;
    int iSum=0;
    while(iNum>0){
        short iLastDigit=iNum%10;
        iSum=iSum+(iLastDigit*iLastDigit*iLastDigit);
        iNum/=10;
    }

    if(iCopy==iSum){
        cout<<"It is Armstrong"<<endl;
    }else{
        cout<<"It is not Armstrong"<<endl;
    }

    return 0;
}