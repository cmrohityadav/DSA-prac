#include<iostream>
using namespace std;

int main()
{
    int row,cols;
   row=3;cols=4;
   int arr[row][cols];

    
    //row wise input
    for(int i=0;i<row;i++){

        for(int j=0;j<cols;j++){

            cin>>arr[i][j];
        }
        

    }

    //printing
     for(int i=0;i<row;i++){

        for(int j=0;j<cols;j++){

            cout<<arr[i][j];
        }
        cout<<endl;
        

    }

    

    return 0;
}
