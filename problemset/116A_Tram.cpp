#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cap = 0;
  int max = 0;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    cap -= a;
    cap += b;
    if (cap > max) {
      max = cap;
    }
  }
  cout << max << '\n';
  return 0;
}