#include<iostream>
using namespace std;
string removeA(string &s,int idx,int size){
    if(idx==size) return "";

    string currentChar="";
    currentChar+=s[idx];
     return ((s[idx]=='a')? "":currentChar)+ removeA(s,idx+1,size);
}
int main()
{
    string s="rahul";
    int size=5;
   string result =removeA(s,0,size);
   cout<<"result: "<<result<<endl;
    return 0;
}
