#include <iostream>
using namespace std;
class hero
{
    
private:
    int health;
public:
    char level;

    hero(){
        cout<<"Constructor is called"<<endl;

    }
    //paramerterised constructor

    hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;
    }
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
   
    hero rohit(10);
    cout<<"address of rohit: "<<&rohit<<endl;
    rohit.getHealth();
    

   


    return 0;
}
