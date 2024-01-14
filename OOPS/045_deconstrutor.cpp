#include<iostream>
using namespace std;
/*
constructor : 1. object inialize
2. no return type
3. name same as class
4. yeh object k bante ki run ho jata hai(apne aap call ho jata hai)
5. bydefault bhi rhta hai but uski kuchh value nhi rhti hai
6. jab hum constructor khud ka bante hai to bydefault wala die ho jata hai
7. its used to initialize data members values
*/
class Animal{
    private:
    int weight;

    public:

    int age;
    string type;
    ~Animal(){
        cout<<" i am inside the destructor"<<endl;
    }

    // constuctor : bdefault constructor
    Animal(){
        cout<<"Constructor called"<<endl;
        this->age=0;
        this->weight=0;
        this->type="kuchh bhi nhi";
    }

    // Parameterised constructor
    Animal(int age){
        this->age=age;
        cout<<"Parameterised constructor called"<<endl;

    }

    Animal(int age,int weight){
        this->age=age;
        this->weight=weight;
        cout<<"Parameterised constructor 2 called"<<endl;

    }

    // copy constructor
    Animal( Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->type=obj.type;
        
        cout<<"i a inside copy constructor"<<endl;

    }

    void eat(){
        cout<<"Eating"<<endl;

    }

    void sleep(){
        cout<<"Sleeping"<<endl;

    }
    // for fecthing 
    int getWeight(){
        return weight;
    }
    // for setting the value
    void setWeight(int weight){
        this->weight=weight;
    }

    //for print
    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;

    }


};

int main()
{
    
   cout<<" object (a) creation"<<endl;
   Animal a;
   a.age=50;
   cout<<" object (b) creation"<<endl;

   Animal * b=new Animal();
   b->age=200;
   delete b;




    return 0;
}

