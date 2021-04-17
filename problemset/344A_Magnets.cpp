#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int groups = 1;
  string init;
  cin >> init;
  for (int i = 1; i < n; ++i) {
    string magnet;
    cin >> magnet;
    if (init != magnet) {
      ++groups;
      init = magnet;
    }
  }
  cout << groups << '\n';
  return 0;
}