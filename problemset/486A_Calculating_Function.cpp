#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll res = 0;
  if (0 == n % 2) {
    res = n / 2;
  } else {
    res = -(n + 1) / 2;
  }
  cout << res << '\n';
  return 0;
}