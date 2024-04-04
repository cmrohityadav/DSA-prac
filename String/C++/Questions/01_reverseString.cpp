#include<iostream>
using namespace std;

string reverseString(string str){
    int start=0;
    int end=str.size()-1;
    while(start<=end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }

    return str;
}
int main(){
    cout<<"reverse enter: ";
    string name;
    cin>>name;

    cout<<reverseString(name)<<endl;


    return 0;
}