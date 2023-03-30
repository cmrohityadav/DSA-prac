#include<bits/stdc++.h>
using namespace std;

int main(){

     unordered_map<int,string>m;
     m[1]="asd"; //O(1) :insertion and access TC
     m[5]="zxc";
     m[2]="qwezxc";
     m[2]="qwezxc";
     m.insert({3,"dfg"});
     unordered_map<int ,string>:: iterator it;
     for(it=m.begin();it !=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
     }

auto it=m.find(8); // O(1)
if(it !=m.end()){
    m.erase(it);  log(1)
}


    return 0;
}