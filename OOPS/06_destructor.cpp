
#include <iostream>

using namespace std;
class rect
{
public:
    int l;
    int b;

    rect()
    { // default constructor -> no args passed
        l = 0;
        b = 0;
    }

    rect(int x, int y)
    { // parameterised constructor -> args pass
        l = x;
        b = y;
    }

    rect(rect & r) //copy constructor -> initialize an object by another exiting object
    {
        l=r.l;
        b=r.b;
    }

    ~rect(){ //destructor
        cout<<"Destructor is called"<<endl;



    }
};

int main()
{

    rect *r1=new rect();

    cout << r1->l << " <--> " << r1->b << endl;
    delete r1;

    rect r2(1, 2);
    cout << r2.l << " <--> " << r2.b << endl;

    rect r3=r2;
    cout<<r3.l<<" <--> "<<r3.b<<endl;

    return 0;
}
