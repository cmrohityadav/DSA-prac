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
int secondLargestElement(int array[],int size);
int main()
{
    
// int array[]={2,3,5,7,6,1};

// int indexOfLargest=largestElementIndex(array,6);
// array[indexOfLargest]=-1;
// int indexOfSecondLargestElement=largestElementIndex(array,6);
// cout<<array[indexOfSecondLargestElement];



//second method
int array[]={2,3,5,7,6,1,7};

cout<<secondLargestElement(array,7);

    return 0;
}
int secondLargestElement(int array[],int size){

    // int max=INT_MIN;
    // int secondMax=INT_MIN;
    // for(int i=0;i<size;i++){
    //     if(array[i]>max){
    //         max=array[i];
    //     }
    // }

    // for(int i=0;i<size;i++){
    //     if(array[i]>secondMax && array[i]!=max){
    //          secondMax=array[i];
    //     }
    // }

    // return secondMax;




    int result=-1; 
    int largest=0;
    for(int i=1; i<size;i++){
        if(array[i]>array[largest]){
            result=largest;
            largest=i;
        }
        else if(array[i]!=array[largest]){
            if(result==-1 || array[i]>array[result]){
                result=i;
            }
        }
    }
    return result;
}