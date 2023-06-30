#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v){

    int n=v.size();
    for(int i=0;i<n-1;i++){
        
        //finding min element in unsorted array
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minIndex]){
                minIndex=j;
            }
        }

       // placing min elemen in begin
       if(i!=minIndex){
        swap(v[i],v[minIndex]);
       }

    }
    return;
}
int main()
{
     int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    selectionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
