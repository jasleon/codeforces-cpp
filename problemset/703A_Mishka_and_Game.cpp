#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int m(0), c(0);
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    if (x > y) {
      ++m;
    }
    if (x < y) {
      ++c;
    }
  }
  string msg;
  if (m > c) {
    msg = "Mishka";
  }
  if (m < c) {
    msg = "Chris";
  }
  if (m == c) {
    msg = "Friendship is magic!^^";
  }
  cout << msg << '\n';
  return 0;
}