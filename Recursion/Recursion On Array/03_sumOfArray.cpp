#include<iostream>
using namespace std;
int sumArray(int arr[],int idx,int size){
   
   
     if(idx==size-1){
        return arr[idx];
        
    }
    return arr[idx]+sumArray(arr,++idx,size);
    

}
int main()
{
    int arr[5]={0,1,0,1,10};
   int result= sumArray(arr,0,5);
   cout<<"result: "<<result<<endl;
    return 0;
}
