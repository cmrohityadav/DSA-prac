#include<iostream>
using namespace std;
/*
1. private data members ko hum inheritance nhi kr skte
2.private DMs ko sirf class (inside) me access kr skte hai 
3. private DMs ko child class me bhi access nhi kr skte hai
4. Protected DMs like private DMs but hum isko  child class me access kr skte hai


*/
class Animal{

 private:
    int age;
    int weight;
      public:
    void eat(){
        cout<<"eating"<<endl;
    }

    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return this->age;
    }

    

};


class Dog:public Animal{


};


int main()
{
    Dog moti;
    moti.eat();


    return 0;
}
