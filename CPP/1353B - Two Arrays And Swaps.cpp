#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, k, a[30],  b[30], sum;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n >> k;
		sum = 0;
		for (size_t i = 0; i < n; i++){
			cin >> a[i];
		}
		for (size_t i = 0; i < n; i++){
			cin >> b[i];
		}
		sort(a, a + n); // ascending
		sort(b, b + n, greater<int>()); // descending
		for (size_t i = 0; i < n; i++)
		{
			if (b[i] > a[i] && k>0) {
				a[i] = b[i];
				k--;
			}
			sum += a[i];
		}
		cout << sum << "\n";
	}
}
