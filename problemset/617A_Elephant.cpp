#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  cin >> x;
  int steps = 0;
  for(int i = 5; 0 < i; --i) {
    if(0 == x % i) {
      steps += x / i;
      break;
    }
    else {
      int step = x / i;
      x -= i * step;
      steps += step;
    }
  }
  cout << steps << '\n';
  return 0;
}