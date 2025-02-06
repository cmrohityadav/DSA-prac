#include <iostream>
using namespace std;
bool isPalindrome(string sString)
{
    int iStart = 0;
    int iEnd = sString.size() - 1;

    while (iStart <= iEnd)
    {
        if (sString[iStart++] != sString[iEnd--])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    string sSentence;
    cout << "Enter string:";
    cin >> sSentence;

    if (isPalindrome(sSentence))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}
