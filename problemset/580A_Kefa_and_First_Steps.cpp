#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  size_t a(0), l(0);
  vector<size_t> values;
  for (size_t i = 0; i < n; ++i) {
    size_t x;
    cin >> x;
    if (a <= x) {
      ++l;
    } else {
      values.push_back(l);
      l = 1;
    }
    if (n == i + 1) {
      values.push_back(l);
    }
    a = x;
  }
  sort(values.rbegin(), values.rend());
  cout << values[0] << '\n';
  return 0;
}