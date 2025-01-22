#include<iostream>
using namespace std;

int sumOfNumbers(int iNum){
    if(iNum<=1){
        return 1;
    }
    int sum=iNum+sumOfNumbers(iNum-1);
    return sum;
}
int main()
{
    cout<<sumOfNumbers(3);
    return 0;
}
