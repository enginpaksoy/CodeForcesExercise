#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> a >> b;
		if (b == 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
			cout << a << ' ' << (long long)a * b << ' ' << (long long) a * (b + 1) << endl;
		}
	}
}
