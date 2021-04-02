#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    string second;
    cin >> first;
    cin >> second;
    int first_sum = 0;
    int second_sum = 0;
    int result = 0;
    for(size_t i = 0; i < first.size(); ++i) {
        char a;
        if(first[i] <= 'Z' && first[i] >= 'A') {
            a = first[i] - ('Z' - 'z');
        }
        else { a = first[i]; }
        char b;
        if(second[i] <= 'Z' && second[i] >= 'A') {
            b = second[i] - ('Z' - 'z');
        }
        else { b = second[i]; }
        if(a < b) {
            result = -1;
            break;
        }
        if(a > b) {
            result = 1;
            break;
        }
    }
    cout << result << "\n";
    return 0;
}