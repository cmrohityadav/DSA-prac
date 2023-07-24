#include<iostream>
using namespace std;

int main()
{
    // int name [row][col];

    int  arr[3][4];
    int  arr2[3][4]={{0,2,3,4},{1,5,6,4},{0,1,2,4}};

    

    //taking input 
    // for(int i=0;i<3;i++){

    //     for(int j=0;j<4;j++){

    //         cin>>arr[i][j];
    //     }
    // }
    
    //print
    for(int i=0;i<3;i++){

        for(int j=0;j<4;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
 for(int i=0;i<3;i++){

        for(int j=0;j<4;j++){

            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
