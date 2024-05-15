#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>dek;
    dek.push_back(10);
    dek.push_back(20);
    dek.push_back(30);
    dek.push_front(-10);
    dek.push_front(0);

    while(!dek.empty()){
        cout<<dek.front()<<" ";
        // dek.pop_back();
        dek.pop_front();
    }
    return 0;
}
