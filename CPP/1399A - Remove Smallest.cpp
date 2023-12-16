#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int t, n, x, a[50] = {0};
	cin >> t;
	for (size_t i = 0; i < t; i++){
		cin >> n;
		for (size_t i = 0; i < n; i++)
		{
			cin >> x;
			a[i] = x;
		}
		sort(a, a + n);
		bool z = false;
		for (size_t i = 0; i < n-1; i++)
		{
			if (a[i + 1] - a[i] >= 2) {
				cout << "NO\n";
				z = true;
				break;
			}
		}
		if (z == false) cout << "YES\n";
		a[n] = { 0 };
	}
}
