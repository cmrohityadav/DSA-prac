#include<iostream>

#include<vector>
using namespace std;

int main()
{
    

    vector<int>v{0,7,8,9,6,54,5};

    int n=v.size();

    for(int i=0;i<n-1;i++){
        bool flag=false;

        for(int j=0;j<n-1-i;j++){

            if(v[j]>v[j+1]){
                flag=true;

                swap(v[j],v[j+1]);
            }
        }
        if(flag==false){
            break;
        }
    }



    for(auto i:v){

        cout<<i<<" ";
    }



    return 0;
}
