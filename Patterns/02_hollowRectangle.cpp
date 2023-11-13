#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;

    for(int i=1;i<=row;i++){

        for(int j=1;j<=5;j++){

            if(i==1 || j== 1 || j==5 || i==row){

                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }


    return 0;
}
