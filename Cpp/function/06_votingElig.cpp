#include<iostream>
using namespace std;
bool checkEligible(int age,int limit){
    if(age>=limit){
        return true;
    }else{
        return false;
    }
}
int main()
{
    cout<<"voting eligibility check system"<<endl;
    cout<<"enter your country limit for voting"<<endl;
    int limit;
    cin>>limit;
    cout<<"enter the your age"<<endl;
    int age;
    cin>>age;
    int check=checkEligible(age,limit);
    if(check){
        cout<<"yes u can";
    }else{
        cout<<"you can't";
    }
    return 0;
}
