#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    int count=0;
    int x;
     cout<<"enter the x"<<endl;
    cin>>x;
    for(int i=0;i<v.size();i++){

        if(v[i]==x){
            count++;
        }
    }
    cout<<"count"<<count<<endl;
    return 0;
}
