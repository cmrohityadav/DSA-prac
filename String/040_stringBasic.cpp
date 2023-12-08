#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    string str;

    //when no space
    // cin>>str; 

    // getline(cin,str);

    // cout<<str<<endl;
    // cout<<str[2]<<endl;
    // cout<<str[5]<<endl;


str="rohit";
    cout<<"lentgh "<<str.length()<<endl;
    cout<<"is empty "<<str.empty()<<endl;

    str.push_back('A');
    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;

    cout<<str.substr(1,2)<<endl;



    string a="love";
    string b="lover";
    if(a.compare(b)==0){
        cout<<"both are same";
    }else{
        cout<<"not same";
    }
cout<<endl;
    cout<<a.compare(b)<<endl;
    cout<<b.compare(a)<<endl;


    //find it return matched first index
    string str1="hi how are you";

    string str2="are";

    cout<<str1.find(str2)<<endl;


    //replace
    string str3="this is good boy";
    string str4="rohit yadav";
    cout<<str3.replace(0,4,str4)<<endl;






    return 0;
}
