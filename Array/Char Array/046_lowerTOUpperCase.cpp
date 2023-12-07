#include<iostream>
#include<cstring>
using namespace std;

void lowerToUpperCase(char name[]){

int n=strlen(name);
for(int i=0;i<n;i++){

    name[i]=name[i]-'a'+'A';
}



}
int main()
{
    
    char name[100];

    cin>>name;
    lowerToUpperCase(name);
    cout<<name;


    return 0;
}
