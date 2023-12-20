#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;

	cin >> n >> m >> a >> b;

	int normal = a * n;
	int special;
	int mix;

	special = (n % m == 0) ? (n / m) * b : (n / m + 1) * b;
	mix = (n / m) * b + (n % m) * a;

	cout << min(min(special, mix), normal);
}
