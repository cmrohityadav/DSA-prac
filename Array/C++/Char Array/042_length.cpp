#include<iostream>
#include <cstring>
using namespace std;

int getLength(char name[]){

    int i=0;
    int len=0;
    while(name[i]!='\0'){
        len++;
        i++;

    }

    return len;
}
int main()
{
    

    char name[200];
    cin>>name;

    cout<<"length of your name is "<<getLength(name)<<endl;

    cout<<"using in built function "<<strlen(name)<<endl;
    return 0;
}
