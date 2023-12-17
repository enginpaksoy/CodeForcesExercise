#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, x, y, n;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> x >> y >> n;
		if (n % x == y) cout << n << "\n";
		else if (n % x < y) cout << n - (n % x) - (x - y) << "\n";
		else if (n % x > y) cout << n - (n % x) + y << "\n";
	}
}
