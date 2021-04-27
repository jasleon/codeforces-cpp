#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> pieces(m, 0);
  for (auto& p : pieces) {
    cin >> p;
  }
  sort(pieces.begin(), pieces.end());
  --n;
  int s = 0;
  int r = 10000;
  while (n < m) {
    r = min(r, pieces[n] - pieces[s]);
    ++n;
    ++s;
  }
  cout << r << '\n';
  return 0;
}