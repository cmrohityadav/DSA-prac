#include<iostream>
using namespace std;
class Car{
    public:
    int model;
    string name;

};

class maruti:public Car{
    

};
int main()
{
    maruti m1;
    m1.model=100;
    m1.name="zqf";
    cout<<m1.model<<endl;
    cout<<m1.name<<endl;
    return 0;
}
