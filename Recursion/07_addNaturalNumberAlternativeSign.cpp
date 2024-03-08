#include<iostream>
using namespace std;
int operationAlt(int number){
    // base case
    if(number==0) return 0;
    // assumption
  return  operationAlt(number-1)+((number%2==0)?(-number):(number));/*cal sum of first n-1 natural num with alternative */



}
int main()
{
    int number=5;
    cout<<operationAlt(number);

    return 0;
}
