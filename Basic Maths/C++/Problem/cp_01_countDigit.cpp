#include<iostream>

int main(){

    int iNumber;
    std::cin>>iNumber;

  int   iCount=0;
    while(iNumber!=0){
        iNumber=iNumber/10;
        iCount++;
    }

  std::  cout<<iCount<<std::endl;
    return 0;
}