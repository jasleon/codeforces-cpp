#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int s = 0;
  s = max(s, a + b + c);
  s = max(s, a + (b * c));
  s = max(s, (a + b) * c);
  s = max(s, (a * b) + c);
  s = max(s, a * (b + c));
  s = max(s, a * b * c);
  cout << s << '\n';
  return 0;
}