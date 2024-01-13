#include <iostream>
using namespace std;
bool checkKey(string str, int s, char key, int i)
{
    if (i >= s)
    {
        return 0;
    }

    if (str[i] == key)
        return 1;

    i++;
    return checkKey(str, s, key, i);
}
int main()
{
    string str = "ohit yadav";
    int n = str.length();
    char key = 'r';
    int index = 0;
    bool ans = checkKey(str, n, key, index);
    cout << "answer" << ans << endl;

    return 0;
}
