#include <iostream>
using namespace std;
class hero
{
    
private:
    int health;
public:
    char level;
    char *name;

    hero(){
        cout<<"Constructor is called"<<endl;
        name=new char[100];
    }
    //paramerterised constructor

    hero(int health,char c){
        this->health=health;
        this->level=c;
    }

    //creating own copy constructor

    hero(hero & temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"name :"<<this->name<<endl;
        cout<<"health :"<<this->health<<endl;
        cout<<"level :"<<this->level<<endl;
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


    // Destructor
    ~hero(){
        cout<<"destructor bhai called"<<endl;
    }


};
int main()
{
    //static 
    hero a;

    //dynamic
    hero *b=new hero();
    // for dynamic munually destructor call
    delete b;


   
   

   


    return 0;
}
