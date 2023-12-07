#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++){
		int n, min = 1000000000, max = 0, a;
		cin >> n;
		for (size_t i = 0; i < n; i++)
		{
			cin >> a;
			if (a > max) max = a;
			if (a < min) min = a;
		}
		cout << max - min << endl;
	}
}
