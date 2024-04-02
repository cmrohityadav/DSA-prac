#include<iostream>

using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=2;

    // k can be greater than n
    k=k%n;
    int ansarray[5];
    int j=0;
    //inserting last k element in ansarray
    for(int i=n-k;i<n;i++){
        ansarray[j++]=array[i];
    }

    //inserting first n-k element in ans array

    for(int i=0;i<=k;i++){
        ansarray[j++]=array[i];
    }

    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" "<<endl;
    }



    return 0;
}