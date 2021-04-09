#include <bits/stdc++.h>

using namespace std;

int main() {
  string user;
  cin >> user;
  string unique;
  for (auto c : user) {
    if (!unique.empty()) {
      bool is_unique = true;
      for (size_t i = 0; i < unique.size(); ++i) {
        if (c == unique[i]) {
          is_unique = false;
          break;
        }
      }
      if (is_unique) {
        unique.push_back(c);
      }
    } else {
      unique.push_back(c);
    }
  }
  if (0 == unique.size() % 2) {
    cout << "CHAT WITH HER!\n";
  } else {
    cout << "IGNORE HIM!\n";
  }
  return 0;
}