#include<bits/stdc++.h>
using namespace std;

int main(){
// push_back()
cout<<"push_back()"<<endl;

string alpha="abc";
char ch='d';
alpha.push_back(ch);
cout<<alpha<<endl;

// size()
cout<<"size()"<<endl;

string str1="asdf";
cout<<str1.size()<<endl;
cout<<str1.length()<<endl;

char ch2[20]="asdf";
cout<<strlen(ch2)<<endl;

//to_string();
cout<<"to_string()"<<endl;

int num=123;
string str2=to_string(num);
str2+="4";
cout<<str2<<endl;
    return 0;
}