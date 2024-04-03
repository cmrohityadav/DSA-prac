#include <iostream>
#include<climits>
using namespace std;

class values{
    public:
    int max;
    int min;
};
values minMax(int arr[], int size)
{     
    values store;
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxValue)
            maxValue = arr[i];
        if (arr[i] < minValue)
            minValue = arr[i];
    }
    store.max=maxValue;
    store.min=minValue;
    return  store;
}
int main()
{

    int arr[5] = {0, 2, 3, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

   values result= minMax(arr, 5);
   cout<<"max value: "<<result.max<<endl;
   cout<<"min value: "<<result.min<<endl;

        return 0;
}