#include<iostream>
using namespace std;

void swaping(string );
void reverseString(string & sStr){
    int iStart=0;
    int iEnd=sStr.size()-1;

    while(iStart<=iEnd){
        char temp=sStr[iStart];
        sStr[iStart]=sStr[iEnd];
        sStr[iEnd]=temp;
        iStart++;
        iEnd--;
    }
}
int main(){

    string sName;
    cout<<"Enter string: ";
    cin>>sName;

    reverseString(sName);
    cout<<sName<<endl;
}