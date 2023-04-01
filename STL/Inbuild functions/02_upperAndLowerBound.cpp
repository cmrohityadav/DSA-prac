#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i];

    }

    cout<<endl;
    int *ptr=lower_bound(a,a+n,2);//similar to sort
  cout<<"Lower bound: "<<(*ptr)<<endl;
  int *ptrU=upper_bound(a,a+n,2);//similar to sort
  cout<<"Upper bound: "<<(*ptrU)<<endl;
    return 0;
}
