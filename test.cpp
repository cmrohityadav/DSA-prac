#include<iostream>

using namespace std;

int main(){
  

  int arr[100],size,num,sub;
  cin>>size;
  

  for(int i=0;i<size;i++){

    cin>>arr[i];
  }

cin>>sub;
cin>>num;
bool flag=false;
  for(int i=0;i<size;i=i+sub){

    for(int j=i;j<=sub;j++){

        if(arr[j]==num){
            flag=true;

        }
    }
    if(flag==false){
        cout<<"0";
        break;
    }






  }
  if(flag==true) cout<<"1";

    return 0;
}