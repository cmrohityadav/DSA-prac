#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    //sum
   int sum=accumulate(v.begin(),v.end(),0);
   cout<<"sum of "<<sum<<endl;


   //count
   int cnt=count(v.begin(),v.end(),3);
   cout<<"count: "<<cnt<<endl;

   //find
   auto it=find(v.begin(),v.end(),3);
   if(it!=v.end()) cout<<*it<<endl;
   else cout<<"not found"<<endl;

  
    
    
    return 0;
}
