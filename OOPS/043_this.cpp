#include<iostream>
using namespace std;
/*
this is pointer to current object
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
    void setWeight(int weight){
        // weight=weight; wrong way
        // this.weight=weight; wrong way bcz this is pointer to current object
        this->weight=weight;
    }


};

int main()
{
    
    Animal ramesh;
    

    ramesh.setWeight(60);
   
    cout<<"weight : "<< ramesh.getWeight()<<endl;


   


    return 0;
}

