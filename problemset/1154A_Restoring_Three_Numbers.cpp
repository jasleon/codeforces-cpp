#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> x(4, 0);
  for (auto& i : x) {
    cin >> i;
  }
  sort(x.rbegin(), x.rend());
  int mx = x[0];
  for (int i = 1; i < 4; ++i) {
    cout << (mx - x[i]) << " ";
  }
  cout << '\n';
  return 0;
}