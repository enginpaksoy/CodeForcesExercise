#include <iostream>
using namespace std;

int main() {
	long long int n, m, a, x, y;
	
	cin >> n >> m >> a;
	x = n / a;
	y = m / a;
	if (n % a) x = x + 1;
	if (m % a) y = y + 1;
	cout << x * y;
}

