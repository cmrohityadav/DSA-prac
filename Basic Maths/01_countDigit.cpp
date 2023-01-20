#include <iostream>
using namespace std;

int main()
{
    cout << "enetr the number" << endl;
    int num;
    cin >> num;
    int count=0;
    while (num != 0)
    {
        num=num/10;
        count++;
    }
    

    cout<<count;

    return 0;
}
