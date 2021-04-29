#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  vector<int> numbers{k, l, m, n};
  vector<int> dragons(d, 0);
  for (const auto& n : numbers) {
    for (int i = n - 1; i < d; i += n) {
      dragons[i] = 1;
    }
  }
  int s = 0;
  for (const auto& d : dragons) {
    s += d;
  }
  cout << s << '\n';
  return 0;
}