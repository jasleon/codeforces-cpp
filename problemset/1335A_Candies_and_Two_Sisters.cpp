#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> result(t, 0);
  for (auto& r : result) {
    int n;
    cin >> n;
    if (n < 3) {
      r = 0;
    } else {
      int m = n / 2 + 1;
      r = n - m;
    }
  }
  for (auto& r : result) {
    cout << r << '\n';
  }
  return 0;
}