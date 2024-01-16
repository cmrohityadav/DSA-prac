#include<iostream>
using namespace std;
class Animal{

    public:
    void speak(){
        cout<<"Speaking"<<endl;

    }
};
class Dog:public Animal{
    public:
    // override
    void speak(){
        cout<<"Barking"<<endl;

    }
};
int main()
{
    // Animal a;
    // Dog a;
    // a.speak();


    // dynamic
    // Animal * a=new Animal();
    // a->speak();
    // Dog * moti=new Dog();
    // moti->speak();

    //upcasting : 
    /* yeh hamesha pointer jiska bana rahega usko uska hi function lega
    2. agar jisse object raha rhe hai uska function chahiye hoga to virtual keyword function k samne use krte hai
    */
    // Animal * a=new Dog();
    // a->speak();

    // downcast
    // Dog * b=(Dog*) new Animal();
    // b->speak();



    

    
    return 0;
}
