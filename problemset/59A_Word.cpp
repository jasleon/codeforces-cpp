#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string l;
  string u;
  size_t lo(0), up(0);
  for (auto c : s) {
    char d = 'Z' - 'z';
    if (('A' <= c) && (c <= 'Z')) {
      u.push_back(c);
      l.push_back(c - d);
      ++up;
    } else {
      u.push_back(c + d);
      l.push_back(c);
      ++lo;
    }
  }
  if (up > lo) {
    cout << u << '\n';
  } else {
    cout << l << '\n';
  }
  return 0;
}