#include<iostream>
using namespace std;
class animals{

    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"bark"<<endl;

    }

};
class human {
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking "<<endl;

    }
};

//multiple inheritance
class kuchBhi: public animals, public human{

};
int main()
{
    
  
    kuchBhi ob;
    ob.bark();
    ob.speak();

    return 0;
}
