#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){

    for(auto vallue:s){
        cout<<vallue<<endl;
    }
    // cout<<endl;
    // for(auto it=s.begin();it != s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}
int main(){

    multiset<string>s;
    s.insert("abc");//O(log(n))
    s.insert("zxcv");
    s.insert("zxcv");
    s.insert("bcd");

    print(s);

    cout<<endl;
    auto it=s.find("abs"); // O(log(n))
    if(it !=s.end()){
        cout<<*it<<endl;
        s.erase(it); //pahli wali value ko delete krega
        cout<<"print"<<endl;
        // print(s);
    }else{
        cout<<"not found";
    }
    // s.erase("abc")  //it delete all the value



    
    return 0;
}