#include <bits/stdc++.h>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  size_t a(0), d(0);
  for(size_t i = 0; i < n; ++i) {
    char c;
    cin >> c;
    if('A' == c) {
      ++a;
    }
    else {
      ++d;
    }
  }
  if(a > d) {
    cout << "Anton\n";
  }
  if(d > a) {
    cout << "Danik\n";
  }
  if(a == d) {
    cout << "Friendship\n";
  }
  return 0;
}