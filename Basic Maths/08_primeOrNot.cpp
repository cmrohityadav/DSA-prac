#include<iostream>
using namespace std;

int main()
{
    

    int num;
    cin>>num;
    bool check=1;
    for(int i=2;i<num;i++){

        if(num%i==0){
            check=0;

        }
    }

    if (check)
    {
      cout<<"prime";
    }else{
        cout<<"not prime";
    }
    
    return 0;
}
