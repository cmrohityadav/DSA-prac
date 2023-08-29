#include <iostream>
using namespace std;
class hero
{
    public:
    // properties/data member /state

    int health;
    char level;

    //behaviour //method//function //data function/memeber function




};
int main()
{
//creating the obejct
    hero var;
    // cout<<sizeof(var)<<endl;

    hero ramesh;
//assigning the value to data member

    ramesh.health=70;
    ramesh.level='a';

    cout << "health is :" << ramesh.health << endl;
    cout << "level is :" << ramesh.level << endl;



    return 0;
}
