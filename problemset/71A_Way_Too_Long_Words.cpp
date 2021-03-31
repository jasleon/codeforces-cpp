#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words;
    for(int i = 0; i < n; ++i) {
        std::string input;
        std::cin >> input;
        words.push_back(input);
    }
    for (auto& w : words) {
        size_t l = w.size();
        if (l > 10) {
            w = w[0] + std::to_string(l-2) + w[l-1];
        }
    }
    for (auto& w : words) {
        std::cout << w << "\n";
    }
    return 0;
}