#include<iostream>
using namespace std;
/*
#include<iostream>
using namespace std;
/*
print number from 1 to n
*/

void print1ToN(int iNum,int n=1){
    
    if(n>iNum){
        return;
    }
    cout<<n++<<" ";
    print1ToN(iNum,n);

}
int main()
{
    print1ToN(10);
    return 0;
}

*/

void print1ToN(int iNum,int n=1){
    
    if(n>iNum){
        return;
    }
    cout<<n++<<" ";
    print1ToN(iNum,n);

}
int main()
{
    print1ToN(10);
    return 0;
}
