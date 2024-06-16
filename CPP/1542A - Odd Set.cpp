#include <iostream>
using namespace std;

int main() {
    int t;
    int n; int x;
    int odd, even;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        odd = 0; even = 0;
        for (int i = 0; i < 2*n; i++){
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }
        if (odd == even) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
