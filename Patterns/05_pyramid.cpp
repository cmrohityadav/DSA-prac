#include<iostream>
using namespace std;

int main()
{
    
    int row;
    cin>>row;

    for(int i=1;i<=row;i++){
        // for space
        for(int s=1;s<=row-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
