#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		for (size_t i = 0; i < n / 2 && n % 4 == 0; i++)
		{
			if (i == 0) cout << "YES\n";
			cout << i * 2 + 2 << " ";
		}
		for (size_t i = 0; i < n / 2 && n % 4 == 0; i++)
		{
			if (i < n / 2 - 1) { 
				cout << i * 2 + 1 << " "; }
			else if(i == n / 2 - 1) {
				cout << i * 2 + 1 + (n/2) << "\n";
			}
		}
		if (n % 4 != 0) cout << "NO\n";
	}
}
