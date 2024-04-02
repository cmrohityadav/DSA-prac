#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int> &v){
    int leftPtr=0;
    int rightPtr=v.size()-1;
    while(leftPtr<rightPtr){
        if(v[leftPtr]%2==1 && v[rightPtr]%2==0){
            swap(v[leftPtr],v[rightPtr]);
            leftPtr++;
            rightPtr--;
        }

        if(v[leftPtr]%2==1){
            leftPtr++;
        }
        if(v[rightPtr]%2==0){
            rightPtr--;
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }

    sortByParity(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    return 0;
}
