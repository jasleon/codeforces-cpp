#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> result;
  for (int i = 0; i < t; ++i) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for (auto& j : a) {
      cin >> j;
    }
    for (auto& j : b) {
      cin >> j;
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int p = 0;
    for (int j = 0; j < k; ++j) {
      if (a[j] < b[p]) {
        a[j] = b[p];
        ++p;
      }
    }
    int s = 0;
    for (auto j : a) {
      s += j;
    }
    result.push_back(s);
  }
  for (auto r : result) {
    cout << r << '\n';
  }
}