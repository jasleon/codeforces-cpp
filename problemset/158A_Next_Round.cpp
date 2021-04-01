#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> scores;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        scores.push_back(x);
    }
    int sum = 0;
    int a_k = scores[k-1];
    for(auto& s : scores) {
        if((s >= a_k) && (s > 0)) { ++sum; }
    }
    cout << sum << "\n";
    return 0;
}