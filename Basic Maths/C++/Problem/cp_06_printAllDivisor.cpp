#include<iostream>

using namespace std;

int main(){

    cout<<"Enter the number :";
    int iNum;
    cin>>iNum;

    for(int i=1;i<=iNum;i++){
        if(iNum%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}