#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  size_t rooms(0);
  for (size_t i(0); i < n; ++i) {
    size_t p, q;
    cin >> p >> q;
    if (q - p >= 2) {
      ++rooms;
    }
  }
  cout << rooms << '\n';
}