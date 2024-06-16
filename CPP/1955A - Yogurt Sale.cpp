#include <iostream>
using namespace std;

int main() {
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> a >> b;
        int result;
        if (2 * a < b) result = n * a;
        else result = (n / 2) * b + (n % 2) * a;
        cout << result << "\n";
    }
    return 0;
}
