#include <iostream>
using namespace std;

int main() {
    long long n(0), m(0), a(0);
    cin >> n;
    cin >> m;
    cin >> a;
    long long flagstones = ((n+a-1)/a)*((m+a-1)/a);
    cout << flagstones << "\n";
    return 0;
}