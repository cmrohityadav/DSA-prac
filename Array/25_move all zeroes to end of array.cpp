#include<iostream>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    //step 1
	    vector<int>temp;
	    for(int i=0;i<n;i++){
	        if(arr[i] != 0){
	            temp.push_back(arr[i]);
	        }
	    }
	    
	   // step 2
	   int nonZero=temp.size();
	   for(int i=0; i<nonZero;i++){
	       arr[i]=temp[i];
	   }
	   
	   
	   //step3
	   
	   for(int i=nonZero;i<n;i++){
	       arr[i]=0;
	   }
	    
	}
};
int main()
{
    
    return 0;
}
