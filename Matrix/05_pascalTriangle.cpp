#include<iostream>
using namespace std;
int fac(int n){

    int fact=1;
    for(int i=0;i<n;i++){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cin>>arr[i][j]=fac(i)/(fac(j)*fac(i-j));
        }
    }
for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cin<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
