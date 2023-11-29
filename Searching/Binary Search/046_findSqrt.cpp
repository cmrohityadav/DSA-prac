#include<iostream>
using namespace std;


int findSqrt(int n){

     int s=0;
     int e=n;
     int target=n;
     int mid=s+(e-s)/2;
     int ans=-1;

     while(s<=e){

        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }else{
            ans=mid;
            mid=s+1;

        }
        mid=s+(e-s)/2;
     }

     return ans;

}
int main()
{
    
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int ans=findSqrt(n);
    cout<<ans<<endl;

    cout<<"enter the precisio"<<endl;
    int pricision;
    cin>>pricision;
    double finalAns=ans;
     double step=0.1;

    for(int i=0;i<pricision;i++){

        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns=j;
        }
        step=step/10;
    }

    cout<<finalAns<<endl;

    return 0;
}
