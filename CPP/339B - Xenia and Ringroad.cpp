#include <iostream>
using namespace std;

int main() {
	int n, m, a;
	int b = 1;
	long long sum = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a;
		sum += a >= b ? a - b : n - (b - a);
		b = a;
	}
	cout << sum;
}
