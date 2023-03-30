#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){

    for(auto vallue:s){
        cout<<vallue<<endl;
    }
    // cout<<endl;
    // for(auto it=s.begin();it != s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}
int main(){

    set<string>s;
    s.insert("abc");//log(n)
    s.insert("zxcv");
    s.insert("zxcv");
    s.insert("bcd");

    print(s);

    cout<<endl;
    auto it=s.find("abs"); // O(log(n))
    if(it !=s.end()){
        cout<<*it<<endl;
        s.erase(it);
        cout<<"print"<<endl;
        // print(s);
    }else{
        cout<<"not found";
    }



    
    return 0;
}