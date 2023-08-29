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

    hero(int health,char c){
        this->health=health;
        this->level=c;
    }
    void print(){
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


};
int main()
{
//    hero rahul;
//    rahul.setHealth(20);
//    rahul.setLevel('A');

hero rahul(8,'B');

rahul.print();
//copy constructor
hero R(rahul);
R.print();



   
   

   


    return 0;
}
