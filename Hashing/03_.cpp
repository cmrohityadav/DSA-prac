#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //pre compute

    // int hash[26]={0}; //only for lower case
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        // hash[s[i]-'a']++;  //only for lower case
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        // cout<<hash[c-'a']<<endl; //only for lower case
        cout<<hash[c]<<endl; 

    }


    return 0;
}
