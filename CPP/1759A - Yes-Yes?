#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, sub;
    s = "yesyesyesyesyesyesyesyesyesyesyesyesyesyesyesyesyesyes";

    for (int i = 0; i < n; i++) {
        cin >> sub;
        bool found = false;
        for (size_t j = 0; j < s.length() && !found; j++) {
            for (size_t k = 0; k <= j && !found; k++) {
                if (s.substr(k, j - k + 1) == sub) {
                    cout << "yes\n";
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "no\n";
        }
    }
}
