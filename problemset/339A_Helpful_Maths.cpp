#include <iostream>
#include <string>
using namespace std;

void fill(char number, int m, string &s) {
    for(int i = 0; i < m; ++i) {
        s.push_back(number);
        if(m != i + 1) { s.push_back('+'); }
    }
}

int main() {
    string s;
    cin >> s;
    size_t len = s.size();
    size_t num = ((len - 1) / 2) + 1;
    int one = 0;
    int two = 0;
    int three = 0;
    for(size_t k = 0; k < num; k++) {
        size_t i = 2*k;
        if(s[i] == '1') { ++one; }
        if(s[i] == '2') { ++two; }
        if(s[i] == '3') { ++three; }
    }
    string result;
    if(one > 0) {
        fill('1', one, result);
    }
    if(two > 0) {
        if(!result.empty()) { result.push_back('+'); }
        fill('2', two, result);
    }
    if(three > 0) {
        if(!result.empty()) { result.push_back('+'); }
        fill('3', three, result);
    }
    cout << result << '\n';
    return 0;
}