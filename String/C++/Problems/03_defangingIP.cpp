#include<iostream>
using namespace std;

string defangingIp(string sIp){
    string sNewStr;
    for(int i=0;i<sIp.size();i++){
        if(sIp[i]=='.'){
            sNewStr+="[.]";
        }else{
            sNewStr.push_back(sIp[i]);
        }
    }
    return sNewStr;
}
int main()
{
    string sIpAddress;
    cout<<"Enter ip Address: ";
    cin>>sIpAddress;
     cout<<"Defanging IP Address: "<<defangingIp(sIpAddress);
    return 0;
}
