#include<iostream>
#include<vector>
using namespace std;
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       int i=0;
       int j=0;
    //    int counter=0;
       vector<int>ans;
       while(i<n && j<m){
           if(a[i]<b[j]){
               i++;
           }
           else if(b[j]<a[i]){
               j++;
           }
           else{
               ans.push_back(a[i]);
               i++;
               j++;
            //    counter++;
           }
       }
       return ans;
    }

    
int main()
{
    
    return 0;
}
