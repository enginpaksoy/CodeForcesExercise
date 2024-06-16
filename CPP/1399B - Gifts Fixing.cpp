#include <iostream>
using namespace std;
int main() {
	int t, n;
	long long a[50], b[50], mov, min_a, min_b;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		mov = 0;
		min_a = 10e9, min_b = 10e9;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			min_a = min(min_a, a[i]);
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			min_b = min(min_b, b[i]);
		}
		for (int i = 0; i < n; i++){
			mov += max(a[i] - min_a, b[i] - min_b);
		}
		cout << mov << "\n";
	}
}
