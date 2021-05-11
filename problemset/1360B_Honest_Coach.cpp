#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> result(t, 0);
  for (auto& r : result) {
    int n;
    cin >> n;
    vector<int> athletes(n, 0);
    for (auto& a : athletes) {
      cin >> a;
    }
    sort(athletes.begin(), athletes.end());
    int m = 1001;
    for (int i = 1; i < n; ++i) {
      m = min(m, athletes[i] - athletes[i - 1]);
    }
    r = m;
  }
  for (auto& r : result) {
    cout << r << '\n';
  }
  return 0;
}