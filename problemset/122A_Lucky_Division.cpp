#include <bits/stdc++.h>

using namespace std;

void build(vector<int> &l) {
  size_t base(2);
  int u(1), d(0), h(0);
  for (size_t i = 1; i < 4; ++i) {
    for (size_t j = 0; j < base; ++j) {
      int l_h = (0 == (0b100 & j)) ? 4 : 7;
      int l_d = (0 == (0b010 & j)) ? 4 : 7;
      int l_u = (0 == (0b001 & j)) ? 4 : 7;
      int lucky = h * l_h + d * l_d + u * l_u;
      l.push_back(lucky);
    }
    base *= 2;
    h = (base > 4) ? 100 : 0;
    d = (base > 2) ? 10 : 0;
  }
}

int main() {
  vector<int> lucky_numbers;
  build(lucky_numbers);
  int n;
  cin >> n;
  for (auto x : lucky_numbers) {
    if (0 == n % x) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}