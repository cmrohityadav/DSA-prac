#include<iostream>
using namespace std;

int main()
{
    int arr[4][4]={

        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {1,9,9,6}

    };

     
    for(int i=0;i<4;i++){

        int sum=0;
        for(int j=0;j<4;j++){

         sum+=arr[i][j];

        }
        cout<<sum<<" "<<endl;
    }


    return 0;
}
