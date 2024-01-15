#include <iostream>
using namespace std;

/*
polymorphism are two type
1. compile time polymorphism
2. Run time polymorphism
*/

/*
compile time polymorphism have 2 types
1. Function overloading
2. Operator Overloading
*/

/*
function overloading k waqt sirf function 
k parameter change hona chahiye nah ki return type
*/
class Cal
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    int sum(int a,float b){
        return a+b+100;
    }
};
int main()
{
    Cal add;
    cout<<add.sum(5,5)<<endl;
    cout<<add.sum(5,5,10)<<endl;
    cout<<add.sum(5,5.10f)<<endl;


    return 0;
}
