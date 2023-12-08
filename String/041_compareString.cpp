#include<iostream>
#include<string>
using namespace std;
bool compare(string a,string b){

    if(a.length()!=b.length()){
        return 0;


    }else{

        for(int i=0;i<a.length();i++){

            if(a[i]!=b[i]){
                return 0;
            }
        }


    }

    return 1;
}
int main()
{
    
string str1="rohit";
string str2="rohit1";


cout<<compare(str1,str2);

    return 0;
}
