#include<iostream>
using namespace std;
int pow(int p,int q){

    if(q==0) return  1;

    return pow(p,--q)*p;
} 
int armstrong(int num,int digit){
    if(num==0) return 0;

    return pow(num%10,digit) + armstrong(num/10,digit);

}
int main()
{
    int num=153;
    int digit=3;
    if(armstrong(num,digit)==num){
        cout<<"its armstrong Number"<<endl;
    }
    return 0;
}
