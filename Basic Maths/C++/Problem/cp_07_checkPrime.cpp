#include<iostream>
using namespace std;

int main()
{
    int iNum;
    cout<<"Enter Number :";
    cin>>iNum;

    for(int i=2;i<iNum;i++){
        if(iNum%i==0){
            cout<<iNum<<" is not prime number"<<endl;
            return 0;
        }
    }
    cout<<iNum<<" is  prime number"<<endl;
    
    return 0;
}
