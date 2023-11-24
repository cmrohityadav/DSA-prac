#include <iostream>
#include <climits>
using namespace std;

int maxElement(int arr[][4], int rows, int cols)
{
    int maxi=INT_MIN;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
                if(arr[i][j]>maxi) 
                maxi=arr[i][j];
        }
    }

    return maxi;
}

int minElement(int arr[][4], int rows, int cols)
{
    int mini=INT_MAX;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
                if(arr[i][j]<mini) 
                mini=arr[i][j];
        }
    }

    return mini;
}
int main()
{

    int arr[4][4] = {

        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {5, 6, 1, 3},
        {1, 9, 0, 60}

    };

cout<<maxElement(arr,4,4)<<endl;
cout<<minElement(arr,4,4)<<endl;

    return 0;
}
