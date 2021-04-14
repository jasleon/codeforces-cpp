#include <bits/stdc++.h>

using namespace std;

int main() {
  string p;
  cin >> p;
  for (const auto& c : p) {
    if (('H' == c) || ('Q' == c) || ('9' == c)) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}