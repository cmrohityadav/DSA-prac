#include<iostream>
using namespace std;
class animals{

    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking "<<endl;

    }

};
class dog: public animals{

    public:
    int dob;
};

class streetwala:public dog{

};
int main()
{
    
    streetwala kutta;
    kutta.speak();
    

    return 0;
}
