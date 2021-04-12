#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  string current;
  cin >> n >> t >> current;
  for (int k = 0; k < t; ++k) {
    string next;
    for (int i = 0; i < n; ++i) {
      if ((n != i + 1) && ('B' == current[i]) && ('G' == current[i + 1])) {
        next.push_back('G');
        next.push_back('B');
        ++i;
      } else {
        next.push_back(current[i]);
      }
    }
    current = next;
  }
  cout << current << '\n';
}