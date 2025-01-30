#include<iostream>

using namespace std;

int main()
{
    string sName;
    // cin => terminate when user press tab,enter and spc
    cin>>sName;
    cout<<"Name is : "<<sName<<endl;


    cout<<"enter discription"<<endl;
    string sDiscription;

    //getline=> terminate when user press enter
    getline(cin,sDiscription);
    cout<<sDiscription<<endl;


    cout<<"Concanate"<<endl;

    string sStockName="TATA :";
    string sExchange=" :NSE BSE";
    string sScrip=sStockName+sExchange;
    cout<<sScrip<<endl;

    
    
    return 0;
}
