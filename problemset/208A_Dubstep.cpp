#include <bits/stdc++.h>

using namespace std;

int main() {
  string song;
  cin >> song;
  vector<size_t> v(song.size(), 1);
  size_t x = song.find("WUB");
  while (-1 != x) {
    v[x] = 0;
    v[++x] = 0;
    v[++x] = 0;
    x = song.find("WUB", x);
  }
  string original;
  for (size_t i = 0; i < song.size(); ++i) {
    if (v[i]) {
      original.push_back(song[i]);
      if ((song.size() != i + 1) && !v[i + 1]) {
        original.push_back(' ');
      }
    }
  }
  cout << original << '\n';
  return 0;
}