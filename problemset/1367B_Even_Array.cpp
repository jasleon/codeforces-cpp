#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> res(t, 0);
  for (auto& r : res) {
    int n;
    cin >> n;
    int pair(0), impair(0);
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      if (i % 2 != x % 2) {
        if (0 == x % 2) {
          ++pair;
        } else {
          ++impair;
        }
      }
    }
    if (pair == impair) {
      r = pair;
    } else {
      r = -1;
    }
  }
  for (auto& r : res) {
    cout << r << '\n';
  }
  return 0;
}