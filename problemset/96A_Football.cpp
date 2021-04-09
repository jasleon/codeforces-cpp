#include <bits/stdc++.h>

using namespace std;

int main() {
  string players;
  cin >> players;
  int counter = 0;
  auto s = players[0];
  for (auto p : players) {
    if (s == p) {
      ++counter;
    } else {
      s = p;
      counter = 1;
    }
    if (7 == counter) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}