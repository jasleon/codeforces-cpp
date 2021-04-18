#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    bool hard;
    cin >> hard;
    if (hard) {
      cout << "HARD\n";
      return 0;
    }
  }
  cout << "EASY\n";
  return 0;
}