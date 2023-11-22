#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (start <= end)
    {
        if (arr[start] != 0 && arr[end] != 1)
            swap(arr[start++], arr[end--]);

        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 1)
        {
            end--;
        }
    }


    for(auto x:arr){

        cout<<x<<" ";
    }


return 0;
}
