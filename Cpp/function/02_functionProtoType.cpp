#include<iostream>
#include<string>
using namespace std;
//prototype
void naam(string);

int main()
{
    string name;
    cin>>name;
    naam(name); //calling function
    
    return 0;
}
//defining the function
void naam(string x){
    cout<<"my name is "<<x<<endl;
}