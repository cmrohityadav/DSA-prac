#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n==0 || n==1) return n;
    
    return fib(n-1)+fib(n-2);
}
int main()
{
    int result=fib(3);
    cout<<result;
    return 0;
}


// iteravtive solution 
// int main()
// {   int num;
// cin>>num;
//     int present=0;
//     int next=1;
//     int sum=1;
//     cout<<present<<" "<<next<<" ";
//     for(int i=2;i<num;i++){
//        sum=present+next;
//         present=next;
//         next=sum;
//        cout<<sum<<" ";
//     }
//     cout<<sum;

//     return 0;
// }