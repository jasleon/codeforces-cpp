#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        if(("++X" == str) || ("X++" == str)) { ++x; }
        else { --x; }
    }
    cout << x << "\n";
    return 0;
}