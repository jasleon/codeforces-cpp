#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int n = static_cast<int>(s.size());
  for (int i(0), j(n - 1); i < n; ++i, --j) {
    if (t[j] != s[i]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}