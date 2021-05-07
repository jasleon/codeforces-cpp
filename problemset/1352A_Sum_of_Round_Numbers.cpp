#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  vector<int> numbers(t, 0);
  for (auto& n : numbers) {
    cin >> n;
  }
  for (auto n : numbers) {
    int a = 1;
    vector<int> rounds;
    for (int i = 0; i < 5; ++i) {
      int x = n % 10;
      if (0 != x) {
        rounds.push_back(a * x);
      }
      n /= 10;
      a *= 10;
    }
    cout << rounds.size() << '\n';
    for (auto r : rounds) {
      cout << r << " ";
    }
    cout << '\n';
  }
}