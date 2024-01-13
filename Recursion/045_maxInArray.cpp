#include<iostream>
#include <climits>
using namespace std;
int  findMax(int arr[],int i,int maxi,int s){
    if(i==s) return maxi;

    maxi=max(maxi,arr[i++]);
     return findMax(arr,i,maxi,s);

}
int main()
{
    
    int arr[5]={1,2,5,6,3};
    int index=0;
    int maxi=INT_MIN;
  cout<< findMax(arr,index,maxi,5);


    return 0;
}
