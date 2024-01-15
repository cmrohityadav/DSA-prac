#include<iostream>
using namespace std;

class Father{
    public:

    string hard;
    int money=000;
};
class Mother{
    public:
    string cutie;
    int money=1000;

};

class Son: public Father,public Mother{
     public:
     void About(){
        cout<<this->hard<<" "<<this->cutie<<endl;
     }
};

int main()
{
     Son a;
     a.hard="most power full";
     a.cutie="whitish chikna";
     a.About();
     

    //  scope resolution
    // cout<<a.money<<endl; /*Son::money" is ambiguous*/
    cout<<a.Father::money<<endl;
    cout<<a.Mother::money<<endl;

    return 0;
}
