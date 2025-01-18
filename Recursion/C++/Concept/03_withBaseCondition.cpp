#include<iostream>
using namespace std;
/*
- when we reach at base condition function will return 
- It will does not goes to call it again 
- function return to its previous parent function at same line
- Parent function start excution next line statement


*/


void dayRemainHBD(int day){

    if(day==0){
        cout<<"  Birthday Dear its your day"<<endl;
        return;
    }

    cout<<day<<" is remain for Birthday"<<endl;
    dayRemainHBD(day-1);
}
int main()
{
    dayRemainHBD(5000);
    return 0;
}
