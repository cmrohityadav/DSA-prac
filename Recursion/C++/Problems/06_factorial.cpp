#include<iostream>
using namespace std;

int fact(int iNum){

    if(iNum<=1){
        return 1;
    }
   return iNum*fact(iNum-1);

}
int main()
{
    cout<<fact(5);
    return 0;
}
