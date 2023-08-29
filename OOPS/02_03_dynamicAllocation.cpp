#include <iostream>
using namespace std;
class hero
{
    
    // properties/data member /state
private:
    int health;
public:
    char level;

    //behaviour //method//function //data function/memeber function

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char A){
        level=A;
    }


};
int main()
{
    //static allocation
  hero a;

cout<<"level is "<<a.level<<endl;
cout<<"health is "<<a.getHealth()<<endl;


//dynamic  allocation

hero *b=new hero;

cout<<"level is "<<(*b).level<<endl;
cout<<"health is "<<(*b).getHealth()<<endl;
//setting value
a.setHealth(20);
a.setLevel('B');

cout<<"level is "<<(*b).level<<endl;
cout<<"health is "<<(*b).getHealth()<<endl;

//other way
cout<<"level is "<<b->level<<endl;
cout<<"health is "<<b->getHealth()<<endl;

//setting value
b->setHealth(50);
b->setLevel('D');

cout<<"level is "<<b->level<<endl;
cout<<"health is "<<b->getHealth()<<endl;


    return 0;
}
