#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string r;
  for (size_t i = 0; i < s.size(); ++i) {
    char x;
    cin >> x;
    bool a = static_cast<bool>(x - '0');
    bool b = static_cast<bool>(s[i] - '0');
    r.push_back((a ^ b) ? '1' : '0');
  }
  cout << r << '\n';
  return 0;
}