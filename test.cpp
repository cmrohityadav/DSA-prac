#include<iostream>
#include<cmath>
using namespace std;

 
int main()
{
    int num=100;
    int log=log10(num);
    cout<<log<<endl;
    cout<<endl;

    
    long long int ans = 0 ;
        for(long long int i=1 ; i<=num ; i++){
            ans += log10(i) + 1;
            cout<<"log"<<"("<<i<<") :"<<log10(i)<<endl;
            cout<<ans<<endl;
        }
    return 0;
}
