#include<iostream>
#include<climits>
using namespace std;
int largestElementIndex(int array[],int size){
    int max=INT_MIN;
    int maxIndex=0;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main()
{
    
int array[]={2,3,5,7,6,1};

int indexOfLargest=largestElementIndex(array,6);
array[indexOfLargest]=-1;
int indexOfSecondLargestElement=largestElementIndex(array,6);
cout<<array[indexOfSecondLargestElement];

    return 0;
}
