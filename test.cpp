#include <iostream>
#include<vector>
using namespace std;

int maxElement(vector<int>& num,int n){

    //base case 
    if(n==1){
        return num[0];
    }

    //recursive call make small problem solve
    int result=maxElement(num,n-1);

    // self work |logic|  return 
    int currentValue=num[n-1];
    int maxi = max(result,currentValue);
    return maxi;

}
int main()
{
    vector<int>v{0,8,6,5,7,4,2};

    std::cout<<maxElement(v,v.size());

    return 0;
}