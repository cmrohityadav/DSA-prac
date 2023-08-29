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
 hero ramesh;
 
 cout<<"ramesh health is"<<ramesh.getHealth()<<endl;

//  use setter 
ramesh.setHealth(70);
 cout<<"ramesh health is"<<ramesh.getHealth()<<endl;




    return 0;
}
