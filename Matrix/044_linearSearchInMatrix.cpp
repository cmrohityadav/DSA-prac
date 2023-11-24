#include<iostream>
using namespace std;

bool findL(int arr[][4],int rows,int cols,int key){

    for(int i=0;i<rows;i++){

        for(int j=0;j<cols;j++){

            if(arr[i][j]==key) return true;
        }
    }

    return false;
}

int main()
{
     int arr[4][4]={

        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {1,9,9,6}

    };

    cout<<findL(arr,4,4,20);

    return 0;
}
