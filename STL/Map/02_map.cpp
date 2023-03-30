#include<bits/stdc++.h>
using namespace std;

int main(){

     map<int,string>m;
     m[1]="asd"; //O(n) :insertion and access TC
     m[5]="zxc";
     m[2]="qwezxc";
     m.insert({3,"dfg"});
     map<int ,string>:: iterator it;
     for(it=m.begin();it !=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
     }


     //using auto;
     cout<<endl;
     map<int,string>mp;
     mp[1]="asd";
     mp[5]="zxc";
     mp[2]="qwezxc";
     mp.insert({3,"dfg"});
     
     for(auto &pr:mp){ //now it will not create copy

     cout<<pr.first<<" "<<pr.second<<endl;

     }

     cout<<endl;
     cout<<m.size()<<endl;
     cout<<mp.size()<<endl;


     cout<<endl;
     auto its=m.find(7); //O(log(n))
     
     if(its==m.end()){
        cout<<"no value";
     }else{
        cout<<(*its).first<<" "<<(*its).second<<endl;
     }



    m.erase(3); //log(n) Tc
   
     for(it=m.begin();it !=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
     }
cout<<endl;
     m.clear();
     cout<<m.size();
    return 0;
}