#include<iostream>
using namespace std;
string removeA(string s,int idx,string &a){
    
    if(idx==s.length()){
        return a;
    }

    if(s[idx]!='a'){
        a.push_back(s[idx]);
    }
    return removeA(s,++idx,a);

}
int main()
{
    string s="rahul";
    string a="";
   string result =removeA(s,0,a);
   cout<<"result: "<<result<<endl;
    return 0;
}
