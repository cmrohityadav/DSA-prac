#include<iostream>
using namespace std;

int main()
{
        int row;
        cin>>row;

        for(int i=1;i<=row;i++){
            for(int s=1;s<=row-i;s++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    return 0;
}