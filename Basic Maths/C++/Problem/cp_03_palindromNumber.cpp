#include <iostream>
using namespace std;

int main()
{

    int iNumber;
    cout << "Enter Number :";
    cin >> iNumber;

    int iCopyOriginalNumber = iNumber;
    int iReversedNumber = 0;

    while (iNumber > 0)
    {
        short iLastDigit = iNumber % 10;
        iReversedNumber = iReversedNumber * 10 + iLastDigit;
        iNumber /= 10;
    }

    if(iReversedNumber==iCopyOriginalNumber){
        cout<<"\nAbove number is palindrome";
    }else{
        cout<<"\nAbove number is not palindrome";
    }

    return 0;
}
