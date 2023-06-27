#include<iostream>
using namespace std;

class parent1 {
    public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};

class child1:public parent1{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2:public parent1{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};



int main()
{
    child1 c;
    child2 c2;

    
    
    return 0;
}
