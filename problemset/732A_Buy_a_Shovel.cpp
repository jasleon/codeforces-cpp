#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;
  int i(0), p(0);
  bool done = false;
  while (!done) {
    p = ++i * k;
    if ((0 == p % 10) || (r == p % 10)) {
      done = true;
    }
  }
  cout << i << '\n';
  return 0;
}