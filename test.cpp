#include <iostream>
#include <vector>

using namespace std;

vector<int> sequentailDigit(int arr, int size, int high, int low){
  vector<int> answer;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= low && arr[i] <= high)
    {
      answer.push_back(arr[i]);
    }

    
  }

  answer.sort(answer.begin(),answer.end());

  return answer;
}
int main()
{
  int arr[] = {101, 15, 68, 16, 48, 96, 206, 306, 806};
  int size = sizeof(arr) / sizeof(arr[0]);
  int low = 20;
  int high = 300;
  cout<<size<<endl;
  vector<int> result;
  // result = sequentailDigit(arr, size, low, high);
  for(int i=0;i<result.size()-1;i++){
    cout<<result[i]<<" ";
  }

  return 0;
}
