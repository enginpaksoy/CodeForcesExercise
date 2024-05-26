#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b, c;
	cin >> t;
	for (size_t i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if (b > a && c > b) {
			cout << "STAIR\n";
		}
		else if (b > a && b > c) {
			cout << "PEAK\n";
		}
		else {
			cout << "NONE\n";
		}
	}
}
