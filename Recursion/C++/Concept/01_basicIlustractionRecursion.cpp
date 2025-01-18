#include <iostream>
using namespace std;

void wishHBD(int i)
{

    cout << " birthday" << endl;
}



void wishHBD1(int i)
{

    cout << i << " day remaining for your birthday" << endl;
    wishHBD(i - 1);
}


void wishHBD2(int i)
{

    cout << i << " day remaining for your birthday" << endl;
    wishHBD1(i - 1);
}



void wishHBD3(int i)
{

    cout << i << " day remaining for your birthday" << endl;
    wishHBD2(i - 1);
}


void wishHBD4(int i)
{

    cout << i << " day remaining for your birthday" << endl;
    wishHBD3(i - 1);
}


int main()
{

    wishHBD4(4);

        return 0;
}
