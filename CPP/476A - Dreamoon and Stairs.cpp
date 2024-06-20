#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int min = (n % 2 == 0) ? n / 2 : n / 2 + 1;
	if (m > n) {
		cout << -1;
	}
	else {
		if (min % m == 0) cout << min;
		else{
			int y = min % m;
			min += m - y;
			cout << min;
		}
	}
}
