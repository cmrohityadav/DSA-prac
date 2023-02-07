#include<iostream>
using namespace std;
float area(int r){
    int a=3.14*(r*r);
    return a;
}
float circum(int x){
    int c=2*3.14*x;
    return c;
}
int main()
{
    cout<<"enter the radius of the circle"<<endl;
    int rd;
    cin>>rd;
    cout<<"area of the ccircle is"<<endl;
    cout<<area(rd)<<endl;
    cout<<"circumference of the ccircle is"<<endl;
    cout<<circum(rd);

    return 0;
}
