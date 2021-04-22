#include <bits/stdc++.h>

using namespace std;

int main() {
  string word;
  cin >> word;
  string out;
  int x = 0;
  const char d = 'Z' - 'z';
  for (size_t i = 0; i < word.size(); ++i) {
    char l = word[i];
    if (0 == i) {
      l += (('a' <= l) && (l <= 'z')) ? d : -d;
    }
    l -= ((0 != i) && ('A' <= l) && (l <= 'Z')) ? d : 0;
    x += ((0 != i) && (l != word[i])) ? 1 : 0;
    out.push_back(l);
  }
  if (word.size() - 1 == x) {
    cout << out << '\n';
  } else {
    cout << word << '\n';
  }
  return 0;
}