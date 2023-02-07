#include<iostream>
using namespace std;
bool isOdd(int x){
    if(x%2==0){
        return false;
    }else{
        return true;
    }
}
int main()
{
    cout<<"odd number b/w a and b"<<endl;
    cout<<"enter the value of a and b"<<endl;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++ ){
        if(isOdd(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
