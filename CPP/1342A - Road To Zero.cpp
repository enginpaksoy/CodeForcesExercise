#include <iostream>
using namespace std;

int main() {
	long long t, x, y, a, b;
	long long amount;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> x >> y;
		cin >> a >> b;
		amount = 0;
		long long maxx = max(x, y);
		long long minn = min(x, y);
		amount += (maxx - minn) * a;
		if (a * 2 > b) {
			amount += minn * b;
		}
		else {
			amount += minn * 2 * a;
		}
		
		cout << amount << "\n";
	}
}
