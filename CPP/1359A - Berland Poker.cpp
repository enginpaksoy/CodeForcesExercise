#include <iostream>
using namespace std;

int main() {
	int t, n, m, k;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n >> m >> k;
		int num_players = n / k;
		int max = (n / k >= m) ? m : n / k;
		m -= max;
		k--;
		int second_max = (m % k != 0) ? m/k + 1: m/k;
		cout << max - second_max << "\n";
	}
}
