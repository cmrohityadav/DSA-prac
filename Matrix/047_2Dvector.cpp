#include<iostream>
#include<vector>
using namespace std;

int main()
{
    

    vector<vector<int>>arr;

    vector<int>a{1,2,3};
    vector<int>b{2,4,6,6,8};
    vector<int>c{1,3};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);


    //for row
    for(int i=0;i<arr.size();i++){

        //for cols
        for(int j=0;j<arr[i].size();j++){

            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

vector<vector<int>>arr3(5,vector<int>(5,-8));

    return 0;
}
