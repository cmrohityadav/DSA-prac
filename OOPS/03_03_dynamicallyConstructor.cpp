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
    cout<<"hi"<<endl;
    hero *rohit=new hero;
    
    cout<<"hello"<<endl;


    return 0;
}
