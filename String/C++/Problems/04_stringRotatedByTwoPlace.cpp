#include<iostream>
using namespace std;

 bool rotatedTwoPlace(string sStrOne,string sStrTwo){

    int iLeft=0;
    int iRight=sStrOne.size()-1;
    bool flag=true;
    while(iLeft-2<iRight){
        if(sStrOne[iLeft++]!=sStrTwo[iLeft+2]){
            flag=false;
            break;
        }
        
    }
    iLeft=0;
    while(iLeft<iRight){
        if(sStrOne[iLeft]!=sStrTwo[iLeft+2]){
            flag=false;
            break;
        }
        
    }

}

int main()
{
    string sString;
    cout<<"Enter string: ";
    cin>>sString;

    
    return 0;
}
