#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  for(int i = 0; i < k; ++i) {
    if(0 == n % 10) {
      n /= 10;
    }
    else {
      --n;
    }
  }
  cout << n << '\n';
  return 0;
}