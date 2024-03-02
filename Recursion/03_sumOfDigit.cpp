#include<iostream>
using namespace std;

int sumOfDigit(int num){
    if(num>=0 && num<=9) return num;

    int lastDigit=num%10;
    int remainingDigitSum= sumOfDigit(num/10);
    return lastDigit+remainingDigitSum;

   
};
int main()
{
    

  int result=  sumOfDigit(555);
  cout<<result<<endl;
    return 0;
}
