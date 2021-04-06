#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    string capital;
    int k = 0;
    for (auto c : word)
    {
        if ((0 == k++) && ('a' <= c) && (c <= 'z'))
        {
            c += 'Z' - 'z';
        }
        capital.push_back(c);
    }
    cout << capital << '\n';
    return 0;
}