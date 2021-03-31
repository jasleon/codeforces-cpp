#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 2; i < 100; i = i + 2) {
        int result = x - i;
        if (result > 0 && result % 2 == 0) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}