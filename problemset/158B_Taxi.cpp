#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> histogram(4, 0);
  for (int i = 0; i < n; ++i) {
    int s;
    cin >> s;
    ++histogram[s - 1];
  }
  int taxis = 0;
  taxis += histogram[3];
  histogram[3] = 0;

  int pairs = min(histogram[2], histogram[0]);
  taxis += pairs;
  histogram[2] -= pairs;
  histogram[0] -= pairs;
  taxis += histogram[2];
  histogram[2] = 0;

  pairs = histogram[1] / 2;
  histogram[1] -= 2 * pairs;
  taxis += pairs;

  if (1 == histogram[1]) {
    ++taxis;
    histogram[0] -= min(2, histogram[0]);
    histogram[1] = 0;
  }

  int quarters = histogram[0] / 4;
  taxis += (0 == histogram[0] % 4) ? quarters : quarters + 1;
  histogram[0] = 0;

  cout << taxis << '\n';
  return 0;
}