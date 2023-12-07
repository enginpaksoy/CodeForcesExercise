#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++){
		int n;
		cin >> n;
		if (n % 2 == 1) cout << n / 2 + 1 << endl;
		else if (n % 2 == 0) cout << n / 2 << endl;
	}
}
