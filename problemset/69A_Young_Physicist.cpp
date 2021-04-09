#include <bits/stdc++.h>

using namespace std;

int main() {
  const int coordinates = 3;
  int n = 0;
  vector<int> sum(coordinates, 0);
  cin >> n;
  for(int i = 0; i < n; ++i) {
    for(auto& s : sum) {
      int value = 0;
      cin >> value;
      s += value;
    }
  }
  if((0 == sum[0]) && (0 == sum[1]) && (0 == sum[2])) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}