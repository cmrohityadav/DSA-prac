#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter the x"<<endl;
    int x;
    cin>>x;
    int occurence=-1;
    //1ts method
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }

//2nd method
 for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }

    cout<<"last Occurence is : "<<occurence;




    return 0;
}
