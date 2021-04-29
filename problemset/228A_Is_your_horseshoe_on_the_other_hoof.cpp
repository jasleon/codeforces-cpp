#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> colors(4, 0);
  for (auto& c : colors) {
    cin >> c;
  }
  int s = 0;
  if (colors[0] == colors[1]) {
    ++s;
  }
  if (colors[0] == colors[2] || colors[1] == colors[2]) {
    ++s;
  }
  if (colors[0] == colors[3] || colors[1] == colors[3] ||
      colors[2] == colors[3]) {
    ++s;
  }
  cout << s << '\n';
  return 0;
}