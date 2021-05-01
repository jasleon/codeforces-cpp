#include <bits/stdc++.h>

using namespace std;

int minimize(int a, int b) {
  int k = 0;
  while (a != b) {
    int e = b - a;
    if ((-10 > e) || (10 < e)) {
      k += abs(e) / 10;
      a += e - (e % 10);
    } else {
      a += e;
      ++k;
    }
  }
  return k;
}

int main() {
  int t;
  cin >> t;
  vector<int> result(t, 0);
  for (auto& r : result) {
    int a, b;
    cin >> a >> b;
    r = minimize(a, b);
  }
  for (auto& r : result) {
    cout << r << '\n';
  }
  return 0;
}