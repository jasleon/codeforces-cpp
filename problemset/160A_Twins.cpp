#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> coins;
  int total = 0;
  for(int i = 0; i < n; ++i) {
    int coin;
    cin >> coin;
    coins.push_back(coin);
    total += coin;
  }
  sort(coins.begin(), coins.end(), greater<int>());
  int pocket = 0;
  int m = 0;
  for(auto& c : coins) {
    if(pocket <= total) {
      pocket += c;
      total  -= c;
      ++m;
    }
    else {
      break;
    }
  }
  cout << m << '\n';
  return 0;
}