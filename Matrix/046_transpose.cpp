#include <iostream>
#include <climits>
using namespace std;

void transpose(int arr[][4], int rows, int cols,int arr2[][4])
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            //    swap(arr[i][j],arr[j][i]);
            arr2[j][i]=arr[i][j];
        }
    }
}

void printMatrix(int arr[][4], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{

    int arr[4][4] = {

        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {5, 6, 1, 3},
        {1, 9, 0, 60}

    };

    int arr2[4][4];

    cout << "original matrix" << endl;
    printMatrix(arr, 4, 4);

    cout << "Transpose of matrix" << endl;
    transpose(arr, 4, 4,arr2);
    printMatrix(arr2, 4, 4);

    return 0;
}
