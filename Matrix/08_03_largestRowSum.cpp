#include<iostream>
#include <climits>
using namespace std;

void printLargestSum(int arr[][4], int row, int col)
{
        int maxi=INT_MIN;
        int num=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            num=i+1;
        }




    }
    cout<<"the maximum sum is "<<maxi<<endl;
    cout<<"this row is "<<num<<endl;

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
 printLargestSum(arr,3,4) ;

    

    

    return 0;
}
