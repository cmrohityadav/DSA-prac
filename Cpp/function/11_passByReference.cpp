#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;
    cout<<x<<"  "<<y<<endl;
    y=20;
     cout<<x<<"  "<<y<<endl;
    return 0;
}
