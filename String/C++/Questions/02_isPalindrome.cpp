#include<iostream>
using namespace std;
bool isPalindrome(string s){
    bool flag=false;
    int start=0;
    int end=s.size()-1;
    while (start<=end){
        if(s[start++]!=s[end--]) {
            return flag;
        }
    
    }
    return true;
}
int main(){

    string name;
    cin>>name;
    cout<<isPalindrome(name);

    return 0;

}