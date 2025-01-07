#include<iostream>

int main(){

    int iNumber;
    std::cout<<"Enter a number : ";
    std::cin>>iNumber;

    int iReverse=0;
    while(iNumber!=0){
        int iLastDigit=iNumber%10;
        iReverse=iReverse*10+iLastDigit;
        iNumber/=10;
    }

    std::cout<<iReverse;

    return 0;
}