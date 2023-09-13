#include<iostream>
using namespace std;

int main()
{
  
 cout<<"voting system check your elibility"<<endl;
 int age;
 cout<<"Enter your age"<<endl;
 cin>>age;

 if(age>18){
    cout<<"you can vote";
 }else if(age<18){
    cout<<"wait for 1 year ";
 }else if(age<15){
    cout<<" your child";
 }else{
    cout<<"not eligible";
 }






   
    return 0;
}
