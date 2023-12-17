#include <iostream>
using namespace std;

int main() {
	int t, n, a[40], num_not_odd = 0, num_not_even = 0;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		for (size_t i = 0; i < n; i++){
			cin >> a[i];
			if ((a[i] % 2) != (i % 2)) {
				if ((i % 2) == 1) num_not_odd++;
				else if ((i % 2) == 0) num_not_even++;
			}
		}
		if (num_not_even == 0 && num_not_odd == 0) cout << 0 << "\n";
		else if (num_not_even == num_not_odd) cout << num_not_even << "\n";
		else cout << -1 << "\n";
		num_not_even = num_not_odd = 0;
	}
}
