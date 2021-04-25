#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < 2; ++i) {
    int x;
    cin >> x;
    for (int j = 0; j < x; ++j) {
      int a;
      cin >> a;
      ++v[a - 1];
    }
  }
  for (int i = 0; i < n; ++i) {
    if (0 == v[i]) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }
  }
  cout << "I become the guy.\n";
  return 0;
}