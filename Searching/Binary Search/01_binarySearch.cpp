#include <iostream>
using namespace std;
/*
Time: O(logn)
Space: O(1)
*/
/*
mid=start+end/2 
=> (start+end+start-start)/2
=> ((start+start)+(end-start))/2
=> (2start+(end-start))/2
=> start+(end-start)/2
*/

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1; // for left part
        }
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {2, 4, 6, 8, 12};

    int index = binarySearch(odd, 5, 4);
    int index1 = binarySearch(even, 6, 14);
    int index2 = binarySearch(even, 6, 12);

    cout << "Index of  is 4 :" << index << endl;

    cout << "index of 14 :" << index1 << endl;
    cout << "index of 12 :" << index2 << endl;

    return 0;
}