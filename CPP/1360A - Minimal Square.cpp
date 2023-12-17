#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, a, b, high, low;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> a >> b;

		if (a > b) { high = a; low = b; }
		else { high = b; low = a; }

		if (high / low < 2) cout << pow(low * 2, 2) << "\n";
		else cout << pow(high, 2) << "\n";
	}
}
