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


};
int main()
{
    
    dog d;
    d.speak();

    return 0;
}
