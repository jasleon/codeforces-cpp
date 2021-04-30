#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int m = min(a, b);
  int r = (max(a, b) - m) / 2;
  cout << m << ' ' << r << '\n';
  return 0;
}