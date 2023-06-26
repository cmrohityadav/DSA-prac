#include<iostream>
using namespace std;


class fruit{
public:
    string name;
    string color;



}; //note this semicolon: is very imp

int main()
{
    
    fruit apple; //creted Object
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" <--> "<<apple.color<<endl;

    fruit *mango=new fruit(); //creating object in otherway
    mango->name="mango";
    mango->color="yellow";
    cout<<mango->color<<" <--> "<<mango->name<<endl;



    


    return 0;
}
