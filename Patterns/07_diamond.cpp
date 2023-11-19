#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;

    for(int i=1;i<=row;i++){

        for(int s=1;s<=(row-i);s++){

            cout<<" ";
        }

        for(int j=1;j<=(2*i-1);j++){
             
             cout<<"*";
        }
        cout<<endl;
    }
//lower part
    for(int i=row-1;i>=1;i--){

        for(int s=(row-i);s>=1;s--){
            cout<<" ";
        }

        for(int j=(2*i-1);j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
