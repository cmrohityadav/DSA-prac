#include<iostream>

using namespace std;
void printMultiples(int num,int k){
        if(k==0) return;

        printMultiples(num,k-1);
        cout<<num*k<<" ";

}
int main(){

    int num=3;
    int k=5;
    printMultiples(num,k);
    return 0;
}