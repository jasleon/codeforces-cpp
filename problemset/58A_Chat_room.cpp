#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  char word[] = "hello";
  const char *ptr = word;
  for (auto c : s) {
    if (*ptr == c) {
      if ('o' == *ptr) {
        cout << "YES\n";
        return 0;
      }
      else {
        ++ptr;
      }
    }
  }
  cout << "NO\n";
  return 0;
}