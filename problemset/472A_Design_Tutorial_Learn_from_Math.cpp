#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x(0), y(0);
  if (0 == n % 2) {
    x = 8;
    y = n - 8;
  } else {
    x = 9;
    y = n - 9;
  }
  cout << x << " " << y << '\n';
  return 0;
}