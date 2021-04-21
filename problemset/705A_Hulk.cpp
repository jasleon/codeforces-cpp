#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  string f;
  for (size_t i = 1; i < n + 1; ++i) {
    if (0 == i % 2) {
      f += "that I love ";
    } else {
      if (1 == i) {
        f += "I hate ";
      } else {
        f += "that I hate ";
      }
    }
  }
  f += "it";
  cout << f << '\n';
  return 0;
}