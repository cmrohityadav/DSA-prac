#include<iostream>
using namespace std;
/*
Data hiding for security*/
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
int main()
{
    


    return 0;
}
