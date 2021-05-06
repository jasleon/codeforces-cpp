#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> timeline(n, 0);
  for (auto& t : timeline) {
    cin >> t;
  }
  int manpower(0);
  int untreated(0);
  for (auto& t : timeline) {
    if (t < 0) {
      if (0 < manpower) {
        --manpower;
      } else {
        ++untreated;
      }
    } else {
      manpower += t;
    }
  }
  cout << untreated << '\n';
  return 0;
}