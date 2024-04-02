#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int> &v){
    int leftPtr=0;
    int rightPtr=v.size()-1;
    while (leftPtr<rightPtr)
    {
        if(v[leftPtr]==1 && v[rightPtr]==0){
            v[leftPtr++]=0;
            v[rightPtr--]=1;

        }
        if(v[leftPtr]==0){
            leftPtr++;
        }
        if(v[rightPtr]==1){
            rightPtr--;
        }
    }
    

}
int main()
{ int n;
    cin>>n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elem;cin>>elem;
        v.push_back(elem);
    }
    
    sortZeroAndOne(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
    return 0;
}
