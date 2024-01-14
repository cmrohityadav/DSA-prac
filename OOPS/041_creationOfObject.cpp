#include<iostream>
using namespace std;
class Animal{
    // access modifiers
    /*public : hum isko use krke
     class k bahar memebers access kr skte hai*/
     /* Private: yeh by default rhta hai,
                hum isko use krke class k under bus members
                ko access kr skte hai
     */

    public:
    // state or properties
    int age;
    string type;

    // behaviour
    void eat(){
        cout<<"Eating"<<endl;

    }

    void sleep(){
        cout<<"Sleeping"<<endl;

    }
    


};

int main()
{
    // Object creation: 2 methods

    // 1. Static 
    Animal ramesh;
    cout<<"age of ramesh is: "<<ramesh.age<<endl;
    cout<<"type of ramesh is: "<<ramesh.type<<endl;

    ramesh.age=12;
    ramesh.type="cat";

    cout<<"age of ramesh is: "<<ramesh.age<<endl;
    cout<<"type of ramesh is: "<<ramesh.type<<endl;


    ramesh.eat();



    // 2. Dynamic 

    Animal* suresh=new Animal;
    // suresh.age=15;
    // suresh.type="billa";
    /*here suresh ek pointer (address hai)
    
        hame address k memory me value store krni hai
        nah ki address me 
        jo heap memory hai
        to derefarrence krna hoga

    */
   (*suresh).age=15;
    (*suresh).type="billa";
     cout<<"age: "<< (*suresh).age<<endl;
    cout<<"type : "<<(*suresh).type<<endl;


    //  alternate way
    suresh->age=24;
    suresh->type="Bambillra";

    cout<<"age: "<<suresh->age<<endl;
    cout<<"type : "<<suresh->type<<endl;

    suresh->eat();
    suresh->sleep();







    return 0;
}

