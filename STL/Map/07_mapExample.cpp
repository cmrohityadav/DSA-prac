#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    vector<int>v{1,1,2,1,3,3,3};

    map<int,int>m;
    for(int i=0;i<v.size();i++){

        //storing freq. of every element in input
        m[v[i]]++;
         // [] ==> m[1]++ ==>[1,1] ==>m[1]++ ==>[1,2]
    }


    int sum=0;
    //finding sum of repetitive element
    //pair :element , frequency

    for(auto pair:m){
        if(pair.second>1){
            sum+=pair.first;
        }
    }

    cout<<"ans "<<sum<<endl;
   
    return 0;
}
