#include<iostream>
using namespace std;
/*
1. jab hum new keyword use krte hai to  memory allocate hoti hai
2. new int : ek int type pointer return hota hai
3. usko ek pointer me store krte hai
4. isko de-allocate bhi krna hoga
5.eg int * a=new int;
    isme(left side) int type pointer create hoga
    jo stack memory me hoga

    isme(right side) jo hai wo heap memory me create hoga


*/
int main()
{
    int * a=new int;

    //2d array using heap memory;

    int row=5;
    int col=3;

    int **arr=new int * [row];
     for(int i=0;i<row;i++){
        

            arr[i]=new int[col];
        
     }

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }



    //  de-allocation

    for(int i=0;i<row;i++){

        delete []arr[i];
    }
    return 0;
}
