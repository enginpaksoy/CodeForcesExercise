#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> a >> b >> c;
		if (a + b == c) cout << "+\n";
		else cout << "-\n";
	}
}
