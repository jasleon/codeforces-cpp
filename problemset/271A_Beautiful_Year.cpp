#include <bits/stdc++.h>

using namespace std;

bool is_distinct(size_t n) {
  bool result = true;
  vector<size_t> digits;
  for (size_t i = 0; i < 4; ++i) {
    digits.push_back(n % 10);
    n /= 10;
  }
  for (size_t i = 1; i < 4; ++i) {
    result &= digits[0] != digits[i];
  }
  for (size_t i = 2; i < 4; ++i) {
    result &= digits[1] != digits[i];
  }
  result &= digits[2] != digits[3];
  return result;
}

int main() {
  size_t y;
  cin >> y;
  size_t n(y + 1);
  while (!is_distinct(n)) {
    ++n;
  }
  cout << n << '\n';
  return 0;
}