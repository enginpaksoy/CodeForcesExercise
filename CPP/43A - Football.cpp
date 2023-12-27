#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 0;
    cin >> n;
    string a, str, b;
    for (size_t i = 0; i < n; i++){
        cin >> str;
        if (a.empty()) a = str, t1++;
        else if (b.empty() && str != a) b = str, t2++;
        else if (a == str) {
            t1++;
        }
        else if (b == str) {
            t2++;
        }
    }
    if (t1 > t2) cout << a;
    else cout << b;


}
