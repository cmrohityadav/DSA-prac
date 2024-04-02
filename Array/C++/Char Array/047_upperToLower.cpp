#include<iostream>
#include<cstring>
using namespace std;

void upperToLowerCase(char name[]){

int n=strlen(name);
for(int i=0;i<n;i++){

    name[i]=name[i]-'A'+'a';
}



}
int main()
{
    
    char name[100];

    cin>>name;
    upperToLowerCase(name);
    cout<<name;


    return 0;
}
