#include <bits/stdc++.h>

using namespace std;

int main() {
  string n;
  cin >> n;
  int counter = 0;
  for(auto u : n) {
    if(('4' == u) || ('7' == u)) {
      ++counter;
    }
  }
  if((4 == counter) || (7 == counter)) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}