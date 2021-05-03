#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mn(101), mx(0), mn_idx(n), mx_idx(0);
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x > mx) {
      mx = x;
      mx_idx = i;
    }
    if (x <= mn) {
      mn = x;
      mn_idx = i;
    }
  }
  int s = 0;
  if (mx_idx > mn_idx) {
    ++s;
  }
  int seconds = mx_idx + (n - 1 - mn_idx) - s;
  cout << seconds << '\n';
  return 0;
}