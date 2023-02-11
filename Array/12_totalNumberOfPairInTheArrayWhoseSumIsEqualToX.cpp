#include<iostream>

using namespace std;

int main(){

    int array[]={3,4,6,7,1};
    int target;
    cout<<"enter the target sum"<<endl;
    cin>>target;
    int size=5;
    int pair=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<5;j++){
            if(array[i]+array[j]==target){
                pair++;
            }
        }
    }

cout<<"the number of the pairs "<<pair<<endl;

    return 0;

}