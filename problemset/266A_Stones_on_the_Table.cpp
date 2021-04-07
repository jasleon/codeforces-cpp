#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    string stones;
    cin >> n >> stones;
    int ref = 0;
    int sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if (stones[ref] == stones[i])
        {
            ++sum;
        }
        else
        {
            ref = i;
        }
    }
    cout << sum << '\n';
}