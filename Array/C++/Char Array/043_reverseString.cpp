#include<iostream>
#include <cstring>
using namespace std;


void rev(char name[]){
    int len=strlen(name);

    int s=0;
    int e=len-1;

    while(s<=e){
        swap(name[s++],name[e--]);

    }


}
int main()
{
    char arr[100];
    cin>>arr;
    cout<<"original string "<<arr<<endl;

    rev(arr);
    cout<<"after reverse "<<arr<<endl;

    return 0;
}
