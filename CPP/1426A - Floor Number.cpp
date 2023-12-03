#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		int n, x;
		cin >> n >> x;
		if (2 >= n) cout << 1 << endl;
		else if ((n - 2) % x == 0) cout << (n - 2) / x + 1 << endl;
		else if ((n - 2) % x != 0) cout << (n - 2) / x + 2 << endl ;
	}

}
