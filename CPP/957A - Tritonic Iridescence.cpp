#include <iostream>
using namespace std;

int main() {
	int n;
	string a;
	cin >> n;
	cin >> a;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] != '?' && a[i] == a[i + 1]) {
			cout << "NO\n";
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '?') {
			if (i == 0 || i == n - 1) {
				cout << "YES\n";
				return 0;
			}
			if (a[i + 1] == '?') {
				cout << "YES\n";
				return 0;
			}
			if (a[i - 1] == a[i + 1]) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
}
