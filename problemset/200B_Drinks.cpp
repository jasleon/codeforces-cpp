#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  float s = 0;
  for (size_t i = 0; i < n; ++i) {
    float x;
    cin >> x;
    s += x;
  }
  cout << (s / static_cast<float>(n)) << '\n';
}