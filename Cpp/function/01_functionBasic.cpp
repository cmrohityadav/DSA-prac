#include<iostream>
using namespace std;
int sumOF(int x, int y){
    int sum=x+y;
    return sum;
}
int main()
{
    cout<<"addition of the two number"<<endl;
    int num1,num2;
    cin>>num1>>num2;

    int x=sumOF(num1,num2);
    cout<<x<<endl;
    return 0;
}
