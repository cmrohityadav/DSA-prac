#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    //creating  copy of the  variable
    //changes does not reflect 
 int i=10;
int j=20;
swap(i,j);
cout<<"i= "<<i<<" j= "<<j;
    return 0;
}
