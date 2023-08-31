#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
         return this->weight=weight;
    }
};



class male:public human{

public:
string color;

void sleep(){

    cout<<"male is sleeping"<<endl;

}

};
int main()
{
    male ob;
    cout<<ob.age<<endl;
    ob.sleep();

    return 0;
}
