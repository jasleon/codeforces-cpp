#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long p = ceil(n / 2.);
  if (k > p) {
    cout << 2 * (k - p) << '\n';
  } else {
    cout << 2 * (k - 1) + 1 << '\n';
  }
  return 0;
}