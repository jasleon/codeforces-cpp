#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> values;
    for(int i = 0; i < n; ++i) {
        std::vector<int> row;
        for(int j = 0; j < 3; ++j) {
            int x;
            std::cin >> x;
            row.push_back(x);
        }
        values.push_back(row);
    }
    int counter = 0;
    for(auto& row : values) {
        int sum = 0;
        for(auto& item : row) {
            if(item > 0) { ++sum; }
        }
        if(sum > 1) { ++counter; }
    }
    std::cout << counter;
    return 0;
}