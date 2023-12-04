#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int>v{4,5,0,2,3,6,6};

    int n=v.size();



    //outer loop for n-1 round
    for(int i=0;i<n-1;i++){

        int minElement=i;

        // inner loop for minimium element 
            for(int j=i+1;j<n;j++){

                if(v[j]<v[minElement]){
                    minElement=j;
                }
            }
        
        //now swap min element at right position
        swap(v[i],v[minElement]);
        
    }


    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}
