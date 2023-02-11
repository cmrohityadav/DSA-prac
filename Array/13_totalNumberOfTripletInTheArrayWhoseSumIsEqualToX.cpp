#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the target"<<endl;
    int target;
    cin>>target;
    int arr[]={3,1,2,4,0,6};
    int triplet=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for( int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    triplet++;
                }
            }
        }
    }
cout<<"number of the trplet is "<<triplet;
    return 0;
}
