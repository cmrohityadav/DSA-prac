#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i];

    }

    cout<<endl;
    auto it=lower_bound(a.begin(),a.end(),2);//similar to sort
  cout<<"Lower bound: "<<(*it)<<endl;
  auto itUb=upper_bound(a.begin(),a.end(),2);//similar to sort
  cout<<"Upper bound: "<<(*itUb)<<endl;
    return 0;
}
