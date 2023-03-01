#include<iostream>
using namespace std;

int main()
{
    int x=20;
    int *ptr=&x;
    double dec=9.8;
    double *ptrd=&dec;

    cout<<"size of x "<<sizeof x<<endl;
    cout<<"size of *ptr "<<sizeof ptr<<endl;
    cout<<"size of dec "<<sizeof dec<<endl;
    cout<<"size of *prtd "<<sizeof ptrd<<endl;
    cout<<ptr<<" " <<(ptr+1)<<endl;
    cout<<ptrd<<" " <<(ptrd+2)<<endl;




    return 0;
}
