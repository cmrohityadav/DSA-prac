#include<iostream>
using namespace std;


bool isPresent(int arr[][4], int key, int row, int col) {

  for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            
            if( arr[row][col] == key) {
                return 1;
            }
            
        }
    }
    return 0;
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
    

    cout<<"enter key"<<endl;
    int key;
    cin>>key;

     if(isPresent(arr, key, 3, 4)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }


    

    return 0;
}
