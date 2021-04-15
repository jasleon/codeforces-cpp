#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n, h;
  cin >> n >> h;
  size_t width(0);
  for(size_t i = 0; i < n; ++i) {
    size_t a;
    cin >> a;
    width += (a > h) ? 2 : 1;
  }
  cout << width << '\n';
}