#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &a, int n, int idx, vector<int> &tmp) {
    // Base case
    if (idx == n) {
        for (int x : tmp) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    // Not take current element
    fun(a, n, idx + 1, tmp);

    // Take current element
    tmp.push_back(a[idx]);
    fun(a, n, idx + 1, tmp);

    // Backtrack
    tmp.pop_back();
}

int main() {
    vector<int> a = {1, 2, 3};
    int n = a.size();
    vector<int> tmp;

    fun(a, n, 0, tmp);

    return 0;
}