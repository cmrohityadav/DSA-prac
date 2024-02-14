#include<iostream>
#include<stack>
using namespace std;

void     printMiddle(stack<int>&s,int &totalSize){
    if(s.size()==0){

        cout<<"there is no element in stack"<<endl;
        return;
    }

    // base case 
    if(s.size()==totalSize/2+1){
        cout<<"middle element is:"<<s.top()<<endl;
        return;

    }
    int temp=s.top();
    s.pop();

    // recursive
    printMiddle(s,totalSize);

    // backTracking
    s.push(temp);

}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(130);
    s.push(40);
    s.push(50);


    int totalSize=s.size();
    printMiddle(s,totalSize);
    return 0;
}
