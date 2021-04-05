#include <iostream>
using namespace std;

int main()
{
    string line;
    cin >> line;
    string task;
    for (auto c : line)
    {
        if ('A' <= c && c <= 'Z')
        {
            c -= 'Z' - 'z';
        }
        if (('a' == c) || ('o' == c) || ('y' == c) || ('e' == c) || ('u' == c) || ('i' == c))
        {
            continue;
        }
        task.push_back('.');
        task.push_back(c);
    }
    cout << task << '\n';
    return 0;
}