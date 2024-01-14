#include<iostream>
using namespace std;
/*
jab Data member private ho,
usko outside class me use krne k liye hum 
getter abd setter use hota hai

*/
class Animal{
    private:
    int weight;

    public:

    int age;
    string type;

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
    void setWeight(int w){
        weight=w;
    }


};

int main()
{
    
    Animal ramesh;
    cout<<"age of ramesh is: "<<ramesh.age<<endl;
    cout<<"type of ramesh is: "<<ramesh.type<<endl;

    ramesh.age=12;
    ramesh.type="cat";

    cout<<"age of ramesh is: "<<ramesh.age<<endl;
    cout<<"type of ramesh is: "<<ramesh.type<<endl;
    // cout<<"weight"<<ramesh.weight<<endl;

    ramesh.setWeight(60);
   
      cout<<"weight : "<< ramesh.getWeight()<<endl;


   


    return 0;
}

