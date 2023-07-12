#include<iostream>
using namespace std;


//function

int binarySearch(int arr[],int size,int key){

    int start=0;
    int end =size-1;

    while (start<=end)
    {
        int mid=(start+end)/2;
       if (arr[mid]==key)
       {
        return mid;
       } 

       //go to right part
       if(key>arr[mid]){
        start=mid+1;

       }else{
        end=mid-1; //for left part
       }

 }
 return -1;
    
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={2,4,6,8,12};

int index=binarySearch(odd,5,4);

cout<<"Index of 18 is "<<index<<endl;
cout<<"rohit";


    return 0;
}