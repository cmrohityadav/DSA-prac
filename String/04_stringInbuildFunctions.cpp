#include <bits/stdc++.h>
using namespace std;

int main()
{
// reverse()
cout<<"reverse()"<<endl;
    string name = "rohit";
    reverse(name.begin(), name.end());
    cout << name << endl;



//substr()
cout<<"substr()"<<endl;
string name1="yrohitdhehdbc";
cout<<name1.substr(1,5)<<endl;
cout<<name1.substr(1)<<endl;


//+
cout<<"+"<<endl;
string name2="Rahul";
string surname="Yadav";
cout<<name2+surname<<endl;



//strcat()
cout<<"strcat()"<<endl;
char s1[20]="piyush";
char s2[20]="yadav";
strcat(s1,s2);
cout<<s1<<endl;






    return 0;
}
