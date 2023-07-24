#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }

}
int main()
{
    
    int  arr[3][4]={{0,2,3,4},{1,5,6,4},{0,1,2,4}};

    

   
  
    
 for(int i=0;i<3;i++){

        for(int j=0;j<4;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 printSum(arr,3,4) ;

    

    

    return 0;
}
