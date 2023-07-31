#include<iostream>
using namespace std;

int main()
{
 cout<<"enter the number";
 int num;
 cin>>num;
int fact=1;
for(int i=1;i<=num;i++){

   fact*=i;

}

cout<<"factorial"<<fact<<endl;

    return 0;
}
