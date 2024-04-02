#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //union
    int a[]={1,2,3};
    int sizea=3;
    int b[]={4,5,6,7,8};
    int sizeb=5;

    vector<int>ans;

    for(int i=0;i<3;i++){
        ans.push_back(a[i]);
    }
      for(int i=0;i<5;i++){
        ans.push_back(b[i]);
    }

    for(auto x:ans){
        cout<<x<<" ";
    }




    



    return 0;
}
