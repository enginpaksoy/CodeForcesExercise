#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++){
		int n, c1, c2;
		cin >> n;
		if (n % 3 == 0) {
			c1 = c2 = n / 3;
		}
		else if (n % 3 == 1) { 
			c2 = n / 3;
			c1 = n - 2*c2;
		}
		else{ 
			c2 = n / 3 + 1;
			c1 = n - 2 * c2;
		}
		cout << c1 << " " << c2 << endl;
	}
}
