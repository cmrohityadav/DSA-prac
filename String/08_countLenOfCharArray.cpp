#include<iostream>

using namespace std;



//length
int getLen(char name[]){
    int count=0;
    for(int i = 0; name[i] != '\0';i++){

        count++;

    }

    return count;
}
int main()
{

    char name[20];
    cout<<"enter name :"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length "<<getLen(name);
    
    return 0;
}
