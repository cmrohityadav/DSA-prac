#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr={1,2,3,4,5};
    int sum=6;
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){

        for(int j=i+1;j<arr.size();j++){

            if(arr[i]+arr[j]==sum)
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }


    return 0;
}
