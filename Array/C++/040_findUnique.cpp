#include<iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>arr){

    int ans=0;

    for(auto ele:arr){
        ans=ans^ele; //imp point use xor
    }
     return ans;
}
int main()
{
    //unique element
    int n;
    cout<<"enter the size of array";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){

        cin>>arr[i];

    }

    int uniqueElement=findUnique(arr);

    cout<<"unique element "<<uniqueElement<<endl;
    return 0;
}
