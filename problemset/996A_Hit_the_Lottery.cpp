#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> bills{100, 20, 10, 5, 1};
  int t = 0;
  for (auto& b : bills) {
    int s = n / b;
    t += s;
    n -= s * b;
  }
  cout << t << '\n';
  return 0;
}