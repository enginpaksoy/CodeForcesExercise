#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int a[10];
	int min, sum;
	cin >> t;
	for (size_t i = 0; i < t; i++) {
		cin >> n;
		min = 10;
		sum = 1;
		for (size_t i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] < min) min = a[i];
		}
		for (size_t i = 0; i < n; i++){
			if (a[i] == min) {
				a[i]++;
				break;
			}
		}		
		for (size_t i = 0; i < n; i++) {
			sum *= a[i];
		}
		cout << sum << "\n";
	}
}
