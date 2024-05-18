#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<string>names;
    cout<<"Enter number of guest: ";
    int num;
    cin>>num;
    while(num>0){
        string name;
        cout<<"Enter the Name of Guest :";
        cin>>name;
        names.insert(name);
        num--;
    }

    cout<<"printing the name of guest with valid and latexic"<<endl;

    for(auto name:names){
        cout<<name<<endl;
    }

    return 0;
}
