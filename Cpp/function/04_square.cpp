#include<iostream>
using namespace std;
int sqr(int x){
    return x*x;
}
int main()
{
    for (int i = 1; i <6 ; i++)
    {
        cout<<sqr(i)<<endl;
    }
    
    return 0;
}
