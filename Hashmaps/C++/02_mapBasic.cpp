#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int>dir;

    dir["rohit"]=45645612;
    dir["rohit"]=45647812;
    dir["rahul"]=45585612;
    dir["yadav"]=456123123;

    // for(auto element:dir){
    //     cout<<"name: "<<element.first<<endl;
    //     cout<<"phone: "<<element.second<<endl;
    //     cout<<endl;
    // }



    //ascending
    // map<int,int>rollNum; 

    // descending
    map<int,int,greater<int>>rollNum;
    rollNum[1]=10;
    rollNum[2]=20;
    rollNum[3]=100;
    rollNum[1]=1200;

    // for(auto element:rollNum){
    //     cout<<"Roll Number: "<<element.first<<endl;
    //     cout<<"Gr Number: "<<element.second<<endl;
    //     cout<<endl;
    // }




    // using itr
    map<string,int>::iterator itr;
     for(itr=dir.begin();itr!=dir.end();itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
     }

    return 0;
}
