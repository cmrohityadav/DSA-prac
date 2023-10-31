#include<iostream>
#define pi 3.14
#define areaM(l,b)(l*b)

using namespace std;

int main()
{
    double r;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    double area =pi*r*r;

    cout<<"Area of the circle "<<area<<endl;

    cout<<"area of macro"<<areaM(5,5)<<endl;
    
    return 0;
}
