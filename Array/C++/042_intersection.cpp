#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[5] = {1, 2, 5, 6, 3};
    int b[7] = {7, 8, 2, 5, 6, 4, 10};

    vector<int> ans;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 7; j++)
        {

            if (a[i] == b[j])
                ans.push_back(a[i]);
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}
