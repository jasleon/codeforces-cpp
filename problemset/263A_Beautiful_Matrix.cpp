#include <iostream>
using namespace std;

int main() {
    const size_t n = 5;
    int row = 0;
    int col = 0;
    for(size_t i = 0; i < n; ++i) {
        for(size_t j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if (x > 0) {
                row = i;
                col = j;
            }
        }
    }
    int result = abs(2 - row) + abs(2 - col);
    cout << result << '\n';
    return 0;
}